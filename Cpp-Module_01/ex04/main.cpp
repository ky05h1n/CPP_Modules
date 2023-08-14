/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 08:01:30 by enja              #+#    #+#             */
/*   Updated: 2023/08/14 03:42:17 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac , char **av)
{   
    int lastpos = 0;
    if (ac != 4 || !av[2][0] || !av[3][0])
    {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::ifstream file(av[1], std::ios::in | std::ios::out);
    if(!file)
    {
            std::cout << "error no file" << std::endl;
            return 1;
    }
            std::ofstream outputfile("newfile.replace");
            std::string line;
            int pos = 0;
            while(getline(file, line))
            {
                    while (1)
                    {
                            pos = line.find(av[2],lastpos);
                             if (pos == -1)
                                break;
                            line.erase(pos, strlen(av[2]));
                            line.insert(pos,av[3],strlen(av[3]));
                            lastpos = pos + strlen(av[3]);
                    }
                    std::ofstream appendfile("newfile.replace", std::ios::app);
                    appendfile << line << std::endl;
                    lastpos = 0;
            }
                    
    return 0;
}