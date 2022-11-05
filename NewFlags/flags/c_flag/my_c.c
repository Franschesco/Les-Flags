/*
** EPITECH PROJECT, 2022
** my_c
** File description:
** flag c
*/
#include "../../include/my.h"

int my_c(va_list list)
{
    return (my_putchar(va_arg(list, int)));
}
