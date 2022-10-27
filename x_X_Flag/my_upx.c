/*
** EPITECH PROJECT, 2022
** my_x
** File description:
** flags x
*/

#include <unistd.h>

int my_upx(unsigned int nb)
{
    return (my_putnbr_base_up(nb, "0123456789abcdef"));
}
