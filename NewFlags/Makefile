##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## main Makefile
##

.SILENT:

SRC =	my_printf.c				\
	specifier.c				\
	flags/tools/my_putchar.c		\
	flags/tools/my_put_nbr_len.c		\
	flags/tools/my_putstr.c			\
	flags/tools/my_revstr.c			\
	flags/tools/my_strlen.c			\
	flags/tools/my_put_float.c		\
	flags/tools/my_putstr1.c		\
	flags/tools/my_putnbr_base_unsigned.c	\
	flags/tools/my_getnbr.c			\
	flags/tools/len_nbr.c			\
	flags/tools/my_put_float_condition.c	\
	flags/tools/my_compute_power_rec.c	\
	flags/tools/my_put_float_return_len.c	\
	flags/tools/my_put_float_condition_return_len.c	\
	flags/d_i_flag/my_d_i.c			\
	flags/d_i_flag/my_d_i_next.c		\
	flags/d_i_flag/my_put_nbr_d_i.c		\
	flags/d_i_flag/my_put_nbr_d_int_max.c	\
	flags/d_i_flag/my_put_nbr_d_int_size.c	\
	flags/d_i_flag/my_put_nbr_d_long_int.c	\
	flags/d_i_flag/my_put_nbr_d_long_long.c	\
	flags/d_i_flag/my_put_nbr_d_ptrdiff.c	\
	flags/d_i_flag/my_put_nbr_d_short.c	\
	flags/d_i_flag/my_put_nbr_d_signed_char.c	\
	flags/o_flag/my_o.c			\
	flags/o_flag/my_o_next.c		\
	flags/o_flag/my_putnbr_base_unsigned_return_len.c	\
	flags/u_flag/my_u.c			\
	flags/u_flag/my_put_u.c			\
	flags/u_flag/my_u_next.c		\
	flags/f_F_flag/my_f.c			\
	flags/f_F_flag/my_f_next.c		\
	flags/x_X_flag/my_lowx.c		\
	flags/x_X_flag/my_lowx_next.c		\
	flags/x_X_flag/my_upx.c			\
	flags/x_X_flag/my_upx_next.c		\
	flags/percentage_flag/my_percentage.c	\
	flags/c_flag/my_c.c			\
	flags/s_flag/my_s.c			\
	flags/e_E_flag/my_low_e.c		\
	flags/e_E_flag/my_up_e.c		\
	flags/g_G_flag/my_low_g.c		\
	flags/g_G_flag/my_up_g.c		\
	flags/g_G_flag/my_put_nbr_len_g.c	\
	flags/g_G_flag/my_put_float_g.c		\
	flags/g_G_flag/my_e_g.c			\
	flags/g_G_flag/my_f_g.c			\
	flags/g_G_flag/my_up_e_g.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

all:	libmy.a

c: 	libmy.a
	gcc main.c -L./ -lmy
	./a.out

s:	libmy.a
	gcc specifier.c -L./ -lmy -g
	./a.out

libmy.a:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	find . \( -name "*~" -o -name "#*#" \) -delete
	find . -name "*.o" -delete

fclean: clean
	rm -f *.a
	rm -f a.out
	rm -f test

re: fclean libmy.a

unit_tests: fclean libmy.a $(OBJ)
	gcc -o test $(OBJ) tests/test_printf.c --coverage -lcriterion

run_tests: unit_tests
	./test

.PHONY:  all	libmy.a	clean	fclean	re
