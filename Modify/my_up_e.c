/*
** EPITECH PROJECT, 2022
** my_up_e
** File description:
** flag E
*/
#include "../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

static int my_up_e_next(int a, int result)
{
    if (a < 10) {
        result = result + my_putchar('0');
        result = result + my_put_nbr_len(a);
    } else
        result = result + my_put_nbr_len(a);
    return (result);
}

int my_up_e1(double nb)
{
    int result = 0, a = 0, power = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        result++;
    } while (nb >= 10) {
        nb = nb / 10;
        a++;
    } while (nb < 1) {
        nb = nb * 10;
        a++;
        power++;
    } result = result + my_put_float(nb);
    result = result + my_putchar('E');
    if (power == 0)
        result = result + my_putchar('+');
    else
        result = result + my_putchar('-');
    result = my_up_e_next(a, result);
    return (result);
}

int my_up_e(va_list list)
{
    double test = va_arg(list, double);
    if (test == 0.000000) {
        my_putstr("0.000000E+00");
        return (12);
    }
    return (my_up_e1(test));
}
