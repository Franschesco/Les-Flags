/*
** EPITECH PROJECT, 2022
** my_u
** File description:
** flag u
*/
#include "../../include/my.h"
#include <stdarg.h>

static int my_put_nbr_len_unsigned_next(unsigned int nb, int *lenght)
{
    unsigned int temp = nb, i = 0;
    if (nb > 0) {
        if (nb >= 10) {
            i = nb % 10;
            nb = nb / 10;
            *lenght = *lenght + 1;
            my_put_nbr_len_unsigned_next(nb, lenght);
            my_putchar(48 + i);
        } else {
            *lenght = *lenght + 1;
            my_putchar(48 + (nb % 10));
        }
    } if (nb == 0) {
        my_putchar('0');
        *lenght = *lenght + 1;
    } return (*lenght);
}

static int my_put_nbr_len_unsigned(unsigned int nb)
{
    int length = 0;
    return (my_put_nbr_len_unsigned_next(nb, &length));
}

static int my_u_negative(long int nb)
{
    while (nb < 0)
        nb += 4294967295;
    return (my_put_nbr_len_unsigned(nb));
}

int my_u(va_list list)
{
    return (my_u_negative(va_arg(list, long int)));
}
