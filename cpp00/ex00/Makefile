NAME = megaphone

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -g

NAME = megaphone

MAIN =	megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) $(MAIN) $(SOURCES)-o $(NAME)

test:
	./megaphone "shhhhh... I think the students are asleep..."
	@echo "expected output :"
	@echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@echo
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "expected output :"
	@echo DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
	@echo
	./megaphone
	@echo "expected output :"
	@echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
all: $(NAME)

clean:
	@echo "Removing object files..."
	@rm -f ${OBJS}

fclean:	clean
	@echo "Removing everything..."
	@rm -f ${NAME}

re:	fclean all

re_bonus:	fclean bonus

.PHONY:	clean fclean re re_bonus