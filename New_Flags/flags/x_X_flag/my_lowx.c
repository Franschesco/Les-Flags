/*
** EPITECH PROJECT, 2022
** my_x
** File description:
** Flags X
*/
#include "../../include/my.h"
#include <stdarg.h>

int my_lowx(va_list list)
{
    long int nb = va_arg(list, long int);
    while (nb < 0)
        nb += 4294967295;
    return (my_putnbr_base_unsigned(nb, "0123456789abcdef"));
}
