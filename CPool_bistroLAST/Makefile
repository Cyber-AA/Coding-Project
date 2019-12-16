##
## EPITECH PROJECT, 2019
## Makefile for day10
## File description:
## 
##
SRC   	=	./eval_expr.c	\
		./my_func.c		\
		./my_convert.c		\
		./main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	calc


all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

