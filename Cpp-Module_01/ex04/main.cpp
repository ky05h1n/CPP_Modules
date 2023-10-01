/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 08:01:30 by enja              #+#    #+#             */
/*   Updated: 2023/08/20 10:25:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int EmptyFilecheck(std::ifstream& file)
{
        std::string temp;
        int sig = 0;
        while (1)
        {
                if (getline(file, temp))
                {
                        for (int i = 0; temp[i]; i++)
                                if(temp[i] >= 33 && temp[i] <= 126)
                                        return 1;
                }
                else if (!file && sig == 0)
                        return 0;
        }
}

int main(int ac , char **av)
{   
        
    int lastpos = 0;
    if (ac != 4 || !av[2][0] || !av[3][0])
    {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 0;
    }

    std::ifstream filetmp(av[1], std::ios::in | std::ios::out);
    if(!filetmp || EmptyFilecheck(filetmp) == 0)
    {
            std::cout << "error : no file/empty or permission needed" << std::endl;
            return 0;
    }
    
            std::ifstream file(av[1], std::ios::in | std::ios::out);
            
            std::ofstream outputfile("newfile.replace");
            
            std::string line;
            int pos = 0;

            std::string str = av[2];
            std::string str2 = av[3];

            while(getline(file, line))
            {
                    while (1)
                    {
                            pos = line.find(av[2],lastpos);
                             if (pos == -1)
                                break;
                            line.erase(pos, str.size());
                            line.insert(pos,av[3],str2.size());
                            //lastpos = pos + str2.size();
                    }
                    std::ofstream appendfile("newfile.replace", std::ios::app);
                    appendfile << line << std::endl;
                    lastpos = 0;
            }
                    
    return 0;
}