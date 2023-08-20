# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 06:22:06 by enja              #+#    #+#              #
#    Updated: 2023/08/20 09:23:49 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain 

SRC = main.cpp

CC = c++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all