/*
** EPITECH PROJECT, 2022
** my_x
** File description:
** flags X
*/
#include "../../include/my.h"
#include <stdarg.h>

int my_upx(va_list list)
{
    return (my_putnbr_base_unsigned(va_arg(list, unsigned int),
                                    "0123456789ABCDEF"));
}
