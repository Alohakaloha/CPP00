NAME	=	ScavTrap
CC	=	c++
FLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRCS	=	ClapTrap.cpp ScavTrap.cpp main.cpp

all:$(NAME)

$(NAME):	$(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		@rm -f $(NAME)

fclean : clean

valgrind:
		valgrind ./$(NAME) --leak-check=full

re : fclean all