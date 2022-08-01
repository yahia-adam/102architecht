##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

MAKEFLAGS	= --silent

SRC	=			src/architect.c	\
				src/main.c			\
				src/usage.c			\
				src/rigor.c	\

SRC_TEST	=	src/102architect.c

OBJ	=			$(SRC:.c=.o)

NAME	=		102architect

UNIT_TEST	=	test_102architect.c

CPPFLAGS		=	-I include/

all:			$(NAME)

$(NAME)	:
				gcc $(SRC) -lm -Wall -Wextra -Werror -o $(NAME) $(CPPFLAGS)

tests_run: 		Make
				gcc -o test $(SRC_TEST)	\
				./tests/$(UNIT_TEST) --coverage -lcriterion
				./test

clean_all:
				rm -f $(OBJ)
				rm -f $(NAME)
				rm -f test
				rm -f *.gcda
				rm -f *.gcno
				rm -f *~
				rm -f *.o

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean all
