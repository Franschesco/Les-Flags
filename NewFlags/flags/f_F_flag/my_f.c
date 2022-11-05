/*
** EPITECH PROJECT, 2022
** my_f
** File description:
** flag f
*/
#include "../../include/my.h"
#include <stdio.h>

int my_f(va_list list)
{
    return (my_put_float(va_arg(list, double)));
}
