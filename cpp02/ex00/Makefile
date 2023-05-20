NAME = fixed
CC = c++
FLAGS = -Wall -Werror -Wextra -g -std=c++98
SRCS = Fixed.cpp main.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

compare:
	c++ -Wall -Werror -Wextra comparison.cpp -o compare

clean:
	@rm -f $(NAME)

fclean : clean

valgrind:
	valgrind ./BraiiiiiiinnnzzzZ --leak-check=full

re : fclean all