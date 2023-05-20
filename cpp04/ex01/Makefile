NAME	=	animal
CC	=	c++
FLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRCS	=	Brain.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

all:$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		@rm -f $(NAME)

fclean : clean

valgrind:
		valgrind ./$(NAME) --leak-check=full

re : fclean all