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
    int a = 1;
    if (int_nb != 0) {
        while (int_nb < 10 * condition) {
            my_putchar('0');
            int_nb = int_nb * 10;
        } return (0);
    } else {
        while (a < condition) {
            my_putchar('0');
            a++;
        }
    }
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
    int ten = 1;
    int a = 0;
    nb = negative_condition(nb);
    nb = nb + (5.00 / (my_compute_power_rec(10, (condition + 1))));
    for (i; (nb - i) > 1; i++);
    nb = nb - i;
    while (a < condition) {
        ten = ten * 10;
        a++;
    }
    arron = nb * ten;
    my_put_nbr_len(i);
    if (condition == 0)
        return 0;
    my_putchar('.');
    zero_condition(arron, condition);
    my_put_nbr_len(arron);
}   

int main (void)
{
    my_put_float_condition(12.002, 10);
    printf("\n%.10f", 12.002);
}
