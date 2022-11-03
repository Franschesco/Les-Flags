##
## EPITECH PROJECT, 2022
## makefile
## File description:
## good prog
##

SRC	=	grep.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	grep

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
		cd ../lib/my && make && cd ../../grep
		gcc -o testgrep grep.c ../tests/test_cat.c \
		--coverage -lcriterion -L../lib/my/ -lmy
		./testgrep
