/*
** EPITECH PROJECT, 2022
** my_f
** File description:
** good prog
*/

#include <stdio.h>

static int zero (int int_nb)
{
    if (int_nb < 10) {
        my_putstr("00000");
        return (5);
    } if (int_nb < 100) {
        my_putstr("0000");
        return (4);
    } if (int_nb < 1000) {
        my_putstr("000");
        return (3);
    } if (int_nb < 10000) {
        my_putstr("00");
        return (2);
    } if (int_nb < 100000) {
        my_putchar('0');
        return (1);
    }
    return (0);
}

int  my_f(float nb)
{
    int i = 0;
    int int_nb = 0;
    int arron = 0;
    int length = 0;
    for (i; (nb - i) > 1; i++);
    nb = nb - i;
    arron = nb * 1000000;
    int_nb = arron;
    if (arron == 1000000)
        length = length + my_putchar('0');
    else
        length = length + my_put_nbr_len(i);
    length = length + my_putchar('.');
    length = length + zero(int_nb);
    if (int_nb != 1000000)
        length = length + my_put_nbr_len(int_nb);
    else {
        length = length + my_putstr("000000");
    }
    return (length);
}
