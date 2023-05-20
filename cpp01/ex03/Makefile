NAME = violence
CC = c++
FLAGS = -Wall -Werror -Wextra -g
SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean : clean

valgrind:
	valgrind "./violence" --leak-check=full

re : fclean all