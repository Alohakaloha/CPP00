NAME = fixed
CC = c++
FLAGS = -Wall -Werror -Wextra -g
SRCS = Fixed.cpp main.cpp
TEST = Fixed.cpp test.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)
	@rm -f test

fclean : clean

test: $(TEST)
	$(CC) $(CFLAGS) $(TEST) -o test


valgrind:
	valgrind $(NAME) --leak-check=full

re : fclean all