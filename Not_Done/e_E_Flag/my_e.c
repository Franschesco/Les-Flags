/*
** EPITECH PROJECT, 2022
** my_e
** File description:
** good prog
*/

#include <stdio.h>

int zero(int arron)
{
    if (arron < 10) {
        my_putstr("00000");
        return (5);
    } if (arron < 100) {
        my_putstr("0000");
        return (4);
    } if (arron < 1000) {
        my_putstr("000");
        return (3);
    } if (arron < 10000) {
        my_putstr("00");
        return (2);
    } if (arron < 100000) {
        my_putstr("0");
        return (1);
    }
}

int my_e(float nb)
{
    int i = 0;
    int arron;
    int a = 0;
    int the_int = nb;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (the_int != 0)
        for (i; (nb - i) > 1; i++);
    if (i >= 10) {
        while (nb >= 10) {
            nb = nb / 10;
            a++;
        }
        for (i = 0; (nb - i) > 1; i++);
    } if (i < 1) {
        while (nb < 1) {
            nb = nb * 10;
            a++;
        }
        for (i = 0; (nb - i) > 1; i++);
    }nb = nb - i;
    my_put_nbr_len(i);
    my_putchar('.');
    arron = nb * 1000000;
    my_put_nbr_len(arron);
    zero(arron);
    my_putstr("e");
    if (a > 0 && the_int != 0)
        my_putchar('+');
    else
        my_putchar('-');
    if (a < 10)
        my_putchar('0');
    my_put_nbr_len(a);
}

int main ()
{
    int result = my_e(5000.109);
    printf("\nRéel: %e\n", 5.00109);
    return (result);
}
