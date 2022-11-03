/*
** EPITECH PROJECT, 2022
** my_e_next
** File description:
** before le put float
*/

int my_e_next (double nb)
{
    while (nb > 10) {
        nb = nb / 10;
    } while (nb < 1) {
        nb = nb * 10;
    } printf("%2f\n", nb);
    my_put_float(nb);
    return (1);
}
