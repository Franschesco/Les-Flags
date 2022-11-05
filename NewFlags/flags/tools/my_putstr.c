/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** put str
*/
#include "../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (*str != '\0'){
        my_putchar(*str);
        str++;
        i++;
    }
    return (i);
}
