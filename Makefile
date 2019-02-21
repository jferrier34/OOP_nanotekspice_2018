##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##


NAME=	nanotekspice

SRC=	src/chipsets/error_gestion.cpp

CC=	g++ -Wall -Wextra -W -g3

RM=	rm -f

all:	$(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) -lncurses

fclean:
	$(RM) $(NAME)

re:	fclean all
