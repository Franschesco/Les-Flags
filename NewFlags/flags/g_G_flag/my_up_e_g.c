/*
** EPITECH PROJECT, 2022
** my_up_e_g
** File description:
** put e g
*/
#include "../../include/my.h"

static int my_e_g_next(int a, int result)
{
    if (a < 10) {
        result = result + my_putchar('0');
        result = result + my_put_nbr_len(a);
    } else
        result = result + my_put_nbr_len(a);
    return (result);
}

int my_up_e_g(double nb)
{
    int result = 0, a = 0, power = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } while (nb >= 10) {
        nb = nb / 10;
        a++;
    } while (nb < 1) {
        nb = nb * 10;
        a++;
        power++;
    } result = result + my_put_float_g(nb);
    result = result + my_putchar('E');
    if (power == 0)
        result = result + my_putchar('+');
    else
        result = result + my_putchar('-');
    result = my_e_g_next(a, result);
    return (result);
}
