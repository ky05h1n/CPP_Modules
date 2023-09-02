# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 11:17:42 by enja              #+#    #+#              #
#    Updated: 2023/09/02 16:57:27 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

fclean : clean

re : fclean all