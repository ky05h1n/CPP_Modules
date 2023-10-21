/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:13:02 by enja              #+#    #+#             */
/*   Updated: 2023/10/21 07:03:34 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void ValidFile()
{
    std::cout << "      Date | Value" << std::endl;
    std::cout << "      2011-01-03 | 3" << std::endl;
    std::cout << "      2011-01-03 | 2" << std::endl;
    std::cout << "      2011-01-03 | 1" << std::endl;
    std::cout << "      2011-01-03 | 1.2" << std::endl;
    std::cout << "      2011-01-09 | 1" << std::endl;
}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream check("data.csv");
    check.seekg(0, std::ios::end);
    if (!check.is_open() || check.tellg() == 0)
        throw FileError();
    check.close();
    
    std::string line;
    std::ifstream file("data.csv");
    std::getline(file, line);
    while (std::getline(file, line))
    {
        int pos = line.find(",");
        std::string date = line.substr(0, pos);
        double val = atof(line.substr(pos + 1).c_str());
        data_base[date] = val;
    }
    file.close();
}

void    BitcoinExchange::ParsInput(char **av)
{    
    std::ifstream inputcheck(*av);
    inputcheck.seekg(0, std::ios::end);
    if (!inputcheck.is_open() || inputcheck.tellg() == 0)
    {
        inputcheck.close();
        throw FileError();
    }
    inputcheck.close();

    std::string line;
    std::ifstream inputfile(*av);
    std::getline(inputfile, line);
    if (line != "date | value")
    {
        inputfile.close();
        throw FileError();
    }

    std::string lines;
    std::ifstream fl(*av);
    size_t min_lines = 0;
    while(std::getline(fl, lines))
        min_lines++;
    if (min_lines < 2)
    {
        fl.close();
        throw FileError();
    }
    fl.close();

    bool sig;
    std::string format = "0000-00-00 | ";
    while (std::getline(inputfile, line))
    {
        sig = false;
        if (line.size() < 14)
        {
            std::cout << "Error: bad input => "<< line << std::endl;
            continue;
        }
        for (int i = 0; i < (int)format.size(); i++)
        {
            if (format[i] == '0')
            {
                if (line[i] < '0' || line[i] > '9')
                {
                     std::cout << "Error: bad input => " << line << std::endl;
                     sig = true;
                     break;
                }
            }
            else if (format[i] != line[i])
            {
                std::cout << "Error: bad input => "<< line << std::endl;
                sig = true;
                break;
            }        
        }
        int pos = line.find("-");
        int year = atoi(line.substr(0, pos).c_str());
        int month = atoi(line.substr(pos + 1, pos + 2).c_str());
        int day = atoi(line.substr(pos + 4).c_str());
        if (day > 31 || day < 1 || month > 12 || month < 1)
        {
            if (!sig)
                std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if ((month < 8 && month % 2 == 0 && day > 30) || (month > 7 && month % 2 != 0 && day > 30) || (month == 2 &&  ((year % 4 != 0 && day > 28) || day > 29)))
        {
            if (!sig)
                std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        int limit = year * 10000   + month * 100 + day;
        if (limit < 20090102 || limit > 20220329)
        {
            if (!sig)
                std::cout << "Error: date not found in the data base " << line << std::endl;
            continue;
        }
        if (!sig)
        {

            int count = 0;
            std::string valstr = line.substr(13);
            for(int i = 0; i < (int)valstr.size(); i++)
            {
                if (valstr[i] == '.')
                    count++;
                if (count > 1 || valstr[0] == '.' || valstr[valstr.size() - 1] == '.' || valstr[i] == ' ')
                {
                    std::cout << "Error: bad input => "<< line << std::endl;
                    sig = true;
                    break;
                }
                if (((valstr[i] < '0' || valstr[i] > '9') && valstr[i] != '.') && valstr[i] != '-')
                {
                    std::cout << "Error: bad input => "<< line << std::endl;
                    sig = true;
                    break;
                }
                if ((valstr[i] == '-' && i != 0))
                {
                    std::cout << "Error: bad input => "<< line << std::endl;
                    sig = true;
                    break;
                }
            }
            if (!sig)
            {
                double val = atof(valstr.c_str());
                if (val < 0 )
                {
                    std::cout << "Error: not a positive number" <<  std::endl;
                    sig = true;
                }
                else if (val > 1000)
                {
                    std::cout << "Error: too large a number" << std::endl;
                    sig = true;
                }
            }
        }
        if (!sig)
        {
            getData(line);
        }
    }
}

void    BitcoinExchange::getData(std::string line)
{
    int pos = line.find(" | " );
    std::string date = line.substr(0, pos);
    if (data_base.find(date) != data_base.end())
        std::cout << line << " => " << std::fixed << data_base[date] * std::atof(line.substr(13).c_str()) << std::endl;
    else
    {
        std::map<std::string, double>::iterator it = data_base.lower_bound(date);
        it--;
        std::cout << line << " => " << std::fixed << data_base[it->first] * std::atof(line.substr(13).c_str()) << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
    *this = obj;
}

const BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange& obj)
{
    if (this != &obj)
    {
        this->data_base = obj.data_base;
    }
    return *this;
}