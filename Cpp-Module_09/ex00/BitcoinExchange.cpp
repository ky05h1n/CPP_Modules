/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:13:02 by enja              #+#    #+#             */
/*   Updated: 2023/10/11 15:23:45 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
    std::ifstream inputfile(*av);
    std::string line;
    std::getline(inputfile, line);
    if (line != "date | value")
        throw FileError();

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
                     std::cout << "Error: bad input => " << line.substr(0, i + 1) << std::endl;
                     sig = true;
                     break;
                }
            }
            else if (format[i] != line[i])
            {
                std::cout << "Error: bad input => "<< line.substr(0, i + 1) << std::endl;
                sig = true;
                break;
            }        
        }
        int pos = line.find("-");
        int year = atoi(line.substr(0, pos).c_str());
        int month = atoi(line.substr(pos + 1, pos + 2).c_str());
        int day = atoi(line.substr(pos + 4).c_str());
        if (year < 2009 || month <= 0 || day < 2)
        {            
            std::cout << "Error: date not found in the data base" << line << std::endl;
            continue;
        }
        if (month > 12 || day > 31)
        {
            std::cout << "Error: bad input => " << line.substr(0,11) << std::endl;
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
                if (count > 1 || valstr[0] == '.' || valstr[valstr.size()] == '.' || valstr[i] == ' ')
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
                    std::cout << "Error: not a positive number" <<  std::endl;
                else if (val > 1000)
                    std::cout << "Error: too large a number" << std::endl;
            }
        }
        else
            getData(line);
    }
}

void    BitcoinExchange::getData(std::string line)
{
    int pos = line.find(" | " );
    std::string date = line.substr(0, pos);
    if (data_base.find(date) != data_base.end())
        std::cout << data_base[date] << std::endl;
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