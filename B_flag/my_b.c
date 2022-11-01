/*
** EPITECH PROJECT, 2022
** my_o
** File description:
** flag o
*/

#include <stdio.h>

int my_b(long nb)
{
    while (nb < 0) {
        nb = 4294967295 + nb;
    }
    return (my_putnbr_base_b(nb, "01"));
}

int main ()
{
    long int a = -1;
    printf("%b\n", a);
    my_b(a);
    return (0);
}
