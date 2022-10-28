/*
** EPITECH PROJECT, 2022
** my_g
** File description:
** good prog
*/

int my_g (double nb)
{
    int result = 0;
    if (nb < 1000000 && nb > 0.00001) {
        result = my_f(nb);
    } else
        result = my_e(nb);
    return (result);
}
