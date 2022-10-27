/*
** EPITECH PROJECT, 2022
** my_x
** File description:
** Flags X
*/

#include <unistd.h>

int my_lowx(unsigned int nb)
{
    return (my_putnbr_base_low(nb, "0123456789abcdef"));
}
