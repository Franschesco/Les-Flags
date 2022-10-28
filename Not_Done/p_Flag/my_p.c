/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** flag d and i
*/

#include <stdio.h>

int my_p(void * nb)
{
    int result = my_putnbr_base_low((my_putstr(nb), "0123456789abcde"));
    return (result);
}

int main ()
{
    int c = 10;
    printf("%p\n", &c);
    int result = my_p(&c);
    return (result);
}
