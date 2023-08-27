# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 20:23:43 by enja              #+#    #+#              #
#    Updated: 2023/08/26 21:12:01 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

SRC = AMateria.cpp Ice.cpp Cure.cpp main.cpp Character.cpp MateriaSource.cpp 

CC = c++ 

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all