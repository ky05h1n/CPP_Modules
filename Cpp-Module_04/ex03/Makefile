# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 20:23:43 by enja              #+#    #+#              #
#    Updated: 2023/08/25 21:24:36 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

SRC = AMateria.cpp Ice.cpp Cure.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all