NAME = HI_THIS_IS_BRAIN
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
	valgrind "./HI_THIS_IS_BRAIN" --leak-check=full

re : fclean all