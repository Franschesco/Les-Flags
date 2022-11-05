/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** my_put_float
*/
#include "../../include/my.h"
#include <stdio.h>

static int zero_condition(int int_nb, int condition)
{
    i = 0;
    while (i < condition - (/*len_nbr après la virgule*/ )) {
        my_putchar('0');
        i++;
    }
    return (0);
}

static double negative_condition(double nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        return (nb);
    } return (nb);
}

int my_put_float_condition(double nb, int condition)
{
    int i = 0, int_nb = 0, length = 0;
    unsigned long long arron = 0;
    nb = negative_condition(nb);
    for (i; (nb - i) > 1; i++);
    nb = nb - i;
    arron = nb * 1000000;
    int_nb = arron;
    if (arron == 1000000) {
        i++;
        length = length + my_put_nbr_len(i);
    } else
        length = length + my_put_nbr_len(i);
    if (condition <= 0)
        return (0);
    length = length + my_putchar('.');
    length = length + zero_condition(int_nb, condition);
    if (int_nb != 1000000)
        length = length + my_put_nbr_len(int_nb);
    else {
        length = length + my_putstr("000000");
    } return (length);
}
