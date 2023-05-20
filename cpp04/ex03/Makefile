NAME	=	interface
CC	=	c++
FLAGS	=	-Wall -Werror -Wextra -g -Wfatal-errors -std=c++98
SRCS	=	AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp main.cpp

all:$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		@rm -f $(NAME)

fclean : clean

valgrind:
		valgrind ./$(NAME) --leak-check=full

re : fclean all