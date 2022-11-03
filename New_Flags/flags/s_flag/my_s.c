/*
** EPITECH PROJECT, 2022
** my_s
** File description:
** flag s
*/
#include "../../include/my.h"

int my_s(va_list list)
{
    return (my_putstr(va_arg(list, char *)));
}
