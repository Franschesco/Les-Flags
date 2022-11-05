/*
** EPITECH PROJECT, 2022
** my_put_nbr g
** File description:
** put number g
*/
#include "../../include/my.h"

static int my_put_nbr_len_next_g(int nb, int *lenght)
{
    int i = 0, temp = nb, result;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        *lenght = *lenght + 1;
    } if (nb > 0) {
        if (nb >= 10) {
            i = nb % 10;
            nb = nb / 10;
            *lenght = *lenght + 1;
            my_put_nbr_len_next_g(nb, lenght);
            my_putchar(48 + i);
        } else {
            *lenght = *lenght + 1;
            my_putchar(48 + (nb % 10));
        }
    } if (nb == 0) {
        my_putchar('0');
        *lenght = *lenght + 1;
    } return (*lenght);
}

int my_put_nbr_len_g(int nb)
{
    int length = 0;
    while ((nb % 10) == 0) {
        nb = nb / 10;
    } int result = my_put_nbr_len_next_g(nb, &length);
    return (result);
}
