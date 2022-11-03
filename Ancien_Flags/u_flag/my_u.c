/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** Good prog
*/

int my_u(unsigned int nb)
{
    while (nb < 0) {
        nb = nb + 4294967295;
    } return (my_put_nbr_len(nb));
}
