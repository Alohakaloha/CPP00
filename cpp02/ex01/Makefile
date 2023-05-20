NAME = a.out
CC = c++
FLAGS = -Wall -Werror -Wextra -g -pedantic
SRCS = Fixed.cpp main.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean : clean

valgrind:
	valgrind ./BraiiiiiiinnnzzzZ --leak-check=full

re : fclean all