/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** Good prog
*/

int my_put_nbr(int nb)
{
    int i = 0;
    int temp = nb;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 0) {
        if (nb >= 10) {
            i = nb % 10;
            nb = nb / 10;
            my_put_nbr(nb);
            my_putchar(48 + i);
        } else {
            my_putchar(48 + (nb % 10));
        }
    } if (nb == 0) {
        my_putchar('0');
    }
    return (0);
}
