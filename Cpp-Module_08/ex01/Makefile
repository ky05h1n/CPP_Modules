NAME = span

SRC = main.cpp Span.cpp

CC = g++

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all