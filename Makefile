##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Nothing
##

CC	=	gcc
CFLAGS	=	-g3

SRC	=	my_strcpy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	choco

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re: fclean all

unit:
	$(CC) -o unit_tests $(SRC) tests/test_my_strcpy.c --coverage -lcriterion

tests_run: unit
	./unit_tests | gcovr --exclude tests/ --branches
