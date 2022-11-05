/*
** EPITECH PROJECT, 2022
** my_put_nbr_d_i
** File description:
** put nbr i and d normal int
*/

int my_put_nbr_d_int(long long nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (11);
    } my_put_nbr_d_int_base(nb);
}

int my_put_nbr_d_int_base(int nb)
{
    int i = 0, temp = nb, result;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    } if (nb > 0) {
        if (nb >= 10) {
            i = nb % 10;
            nb = nb / 10;
            my_put_nbr_d_int_base(nb);
            my_putchar(48 + i);
        } else {
            my_putchar(48 + (nb % 10));
        }
    } if (nb == 0) {
        my_putchar('0');
    } return (0);
}
