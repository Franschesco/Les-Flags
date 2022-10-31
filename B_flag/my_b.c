/*
** EPITECH PROJECT, 2022
** my_o
** File description:
** flag o
*/

#include <stdio.h>

int my_b(unsigned int nb)
{
    return (my_putnbr_base_b(nb, "01"));
}

int main ()
{
    int result = my_b(4294967195);
    printf("\n%b", -100);
    return (0);
}
