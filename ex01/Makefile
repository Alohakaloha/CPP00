NAME = awesome

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

SRCS = Contacts.cpp Phonebook.cpp main.cpp

OBJS = $(SRCS:%.cpp=%.o)


all:$(NAME)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "Removing object files..."

fclean:clean
	@echo "Removing everything..."
	@rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re