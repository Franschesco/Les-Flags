/*
** EPITECH PROJECT, 2022
** my_p
** File description:
** good prog
*/

int my_p (long a)
{
    int len = 1;
    len = len + my_putstr("0x");
    len = len + my_putnbr_base_o(a, "0123456789abcdef");
    return (len);
}
