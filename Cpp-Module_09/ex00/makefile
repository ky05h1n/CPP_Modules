# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 13:58:55 by enja              #+#    #+#              #
#    Updated: 2023/10/19 06:42:18 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC = main.cpp BitcoinExchange.cpp

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

fclean : clean

re : fclean all
