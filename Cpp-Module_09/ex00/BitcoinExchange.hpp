/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:12:57 by enja              #+#    #+#             */
/*   Updated: 2023/10/10 18:39:02 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange{


            private:

                    std::map<std::string, double> data_base;

            public:

                    BitcoinExchange();
                    ~BitcoinExchange();
                    BitcoinExchange(const BitcoinExchange& obj);
                    const BitcoinExchange& operator = (const BitcoinExchange& obj);

                    class FileError : public std::exception{};
                    void    ParsInput(char **av);
                    void    getData(std::string line);

};