# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 17:40:26 by enja              #+#    #+#              #
#    Updated: 2023/07/29 17:59:58 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone 

SRC = megaphone.cpp

CC = g++

FLAGS = -W -W -W cpp98

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all