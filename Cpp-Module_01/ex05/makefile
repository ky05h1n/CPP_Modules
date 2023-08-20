# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 06:24:25 by enja              #+#    #+#              #
#    Updated: 2023/08/20 09:23:57 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl 

SRC = Harl.cpp main.cpp

CC = c++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all