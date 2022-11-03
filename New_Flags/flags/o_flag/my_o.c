/*
** EPITECH PROJECT, 2022
** my_o
** File description:
** flag o
*/
#include "../../include/my.h"
#include <stdarg.h>

int my_o(va_list list)
{
    long int nb = va_arg(list, long int);
    while (nb < 0)
        nb += 4294967295;
    return (my_putnbr_base_unsigned(nb, "01234567"));
}
