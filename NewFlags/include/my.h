/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header printf
*/

#ifndef TEST_H_
    #define TEST_H_

    #include <stdarg.h>

int my_printf(const char *restrict format, ...);
int *specifier(char *str, int *array);

int my_putchar(char);
int my_put_nbr_len(int);
int my_putstr(char const *);
int my_strlen(char const *);
char *my_revstr(char *);
int my_put_float(double);
int my_putnbr_base_unsigned(unsigned int, char const *);
int my_putstr1(char const *);
int len_nbr(long long);

int my_percentage(va_list);

int my_d_i(va_list, int *);
int my_put_nbr_d_int(long long);
int my_put_nbr_d_int_max(long long);
int my_put_nbr_d_int_size(unsigned long long);
int my_put_nbr_d_long_int(long long);
int my_put_nbr_d_long_long_int(long long);
int my_put_nbr_d_int_ptrdiff(long long);
int my_put_nbr_d_short_int(long long);
int my_put_nbr_d_signed_char(long long);

int my_f(va_list);

int my_o(va_list, int *);
int my_putnbr_base_o(unsigned int, char const *);
int my_putstr_o(char const *);
int len_nbr_base(unsigned int, char const *);

int my_u(va_list, int *);
int my_put_nbr_u(long int);

int my_lowx(va_list, int *);
int my_putnbr_base_x(int, char const *);
int my_putstr_x(char const *);
int my_upx(va_list, int *);

int my_c(va_list);

int my_s(va_list);

int my_up_e(va_list);
int my_up_e1(double);
int my_low_e(va_list);
int my_low_e1(double);

int my_put_float_g(double);
int my_low_g(va_list);
int my_up_g(va_list);
int my_put_nbr_len_g(int);
int my_e_g(double);
int my_f_g(double);
int my_up_e_g(double);

#endif
