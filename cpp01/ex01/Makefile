NAME = Moar_brainz!
CC = c++
FLAGS = -Wall -Werror -Wextra -g
SRCS = Zombie.cpp Zombiehorde.cpp main.cpp

all:$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean : clean

valgrind:
	valgrind "./Moar_brainz!" --leak-check=full

re : fclean all