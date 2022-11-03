/*
** EPITECH PROJECT, 2022
** my_g
** File description:
** flag g
*/
#include "../../include/my.h"
#include <stdarg.h>

int my_low_g(va_list list)
{
    double nb = va_arg(list, double);
    if (nb < 1000000 && nb > 0.00001)
        return (my_f_g(nb));
    else
        return (my_e_g(nb));
}
