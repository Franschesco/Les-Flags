/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** put str -1
*/
#include "../../include/my.h"

int my_putstr1(char const *str)
{
    int i = -1;
    while (*str != '\0'){
        my_putchar(*str);
        str++;
        i++;
    } return (i);
}
