/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** flag d and i
*/

#include "../../include/my.h"
#include <stdarg.h>

int my_d_i(va_list list)
{
    int result = (va_arg(list, int));
    if (result == -2147483648) {
        my_putstr("-2147483648");
        return (11);
    } return (my_put_nbr_len(result));
}
