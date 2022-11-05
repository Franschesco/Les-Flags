/*
** EPITECH PROJECT, 2022
** my_o_next
** File description:
** the next of my o
*/

#include "../../include/my.h"
#include <stdarg.h>

int what_put_nbr_o(va_list list, int * array, long long int result)
{
    if (array[3] == -1) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 1) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 2) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 3) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 4) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 5) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 6) {
        my_putnbr_base_unsigned(result, "01234567");
    }  if (array[3] == 7) {
        my_putnbr_base_unsigned(result, "01234567");
    }
}

int first_array(va_list list, int * array, long long int result)
{
    if (array[0] == 4 && array[2] == -1)
        my_putchar('0');
}

int seconde_next_writing(va_list list, int * array, long long int result, int a)
{
    if (a == 0) {
        if (array[0] == 5 || array[2] >= 0)
            my_putchar('0');
        else
            my_putchar(' ');
    } else {
        if (array[0] == 5)
            my_putchar('0');
        else
            my_putchar(' ');
    }
}

int seconde_next(va_list list, int * array, long long int result)
{
    int i = 0;
    int value = 0;
    int new_value = 0;
    if (array[1] == -2) {
        new_value = va_arg(list, long int);
        value = len_nbr_base(new_value, "01234567");
        if (array[0] == 1)
            what_put_nbr_o(list, array, new_value);
        while (i < result - value) {
            seconde_next_writing(list, array, result, 0);
            i++;
        } if (array[0] != 1) {
            what_put_nbr_o(list, array, new_value);
        } return (-1);
    } return 0;
}

int seconde_array(va_list list, int * array, long long int result)
{
    int i = 0;
    int value = 0;
    if (array[1] >= 0 && array[0] == 1) {
        what_put_nbr_o(list, array, result);
        value = len_nbr_base(result, "01234567");
        while (i < array[1] - value) {
            my_putchar(' ');
            i++;
        } return (-1);
    }
    if (array[1] >= 0) {
        value = len_nbr_base(result, "01234567");
        while (i < array[1] - value) {
            seconde_next_writing(list, array, result, 1);
            i++;
        }
    } return (seconde_next(list, array, result));
}
