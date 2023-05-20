NAME = loser
CC = c++
FLAGS = -Wall -Werror -Wextra -g
SRCS = main.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean : clean

valgrind:
	valgrind "./Makefile.replace" --leak-check=full

re : fclean all