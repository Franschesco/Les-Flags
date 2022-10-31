/*
** EPITECH PROJECT, 2022
** my_o
** File description:
** flag o
*/

#include <stdio.h>

int my_b(int nb)
{
    int a = 0;
    if (nb < 0) {
        nb = -nb;
        a++;
    } return (my_b_next(nb, a));
}

int my_b_next(unsigned int nb, int a)
{
    if (a != 0) {
        nb = 4294967295 - nb;
        if (nb < 0)
            my_b_next(nb, a);
    }
    return (my_putnbr_base_o(nb, "01"));
}

int main ()
{
    int result = my_b(-10);
    printf("\n%b", -10);
    return (0);
}
