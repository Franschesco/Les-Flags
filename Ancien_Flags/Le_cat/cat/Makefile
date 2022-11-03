##
## EPITECH PROJECT, 2022
## makefile
## File description:
## good prog
##

SRC	=	cat.c	\
		catmain.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all: $(NAME)

$(NAME): $(OBJ)
		make -C ../lib/my/
		gcc -o $(NAME) $(OBJ) -L../lib/my/ -lmy

clean:
		rm -f $(OBJ)

fclean:
		rm cat -f
		rm *.o -f
		rm *~ -f

re: fclean all

tests_run: $(OBJ)
		cd ../lib/my && make && cd ../../cat
		gcc -o testcat cat.c ../tests/test_cat.c \
		--coverage -lcriterion -L../lib/my/ -lmy
		./testcat
