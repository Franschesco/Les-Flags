/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** flag d and i
*/

#include "../../include/my.h"
#include <stdarg.h>

int precision (int *array, long long result, va_list list)
{
    int value = 0;
    int number = 0;
    int i = 0;
    if (array[2] >= 0) {
        value = len_nbr(result);
        while (i < array[2] - value) {
            my_putchar('0');
            i++;
        }
        lenght(array, result);
    } return (-1);
    if (array[2] == -2) {
        value = va_arg(list, int);
        number = len_nbr(value);
        while (i < array[2] - number) {
            my_putchar('0');
            i++;
        }
        lenght(array, value);
    } return (-1);
}

int special(int *array, long long result, va_list list)
{
    int special = va_arg(list, int);
    int value = len_nbr(special);
    int i = 0;
    while (i < result - value) {
        my_putchar('0');
        i++;
    } lenght(array, special);
}

int lenght(int * array, long long result)
{
    if (array[3] == -1)
        my_put_nbr_d_int(result);
    if (array[3] == 1)
        my_put_nbr_d_short_int(result);
    if (array[3] == 2)
        my_put_nbr_d_long_int(result);
    if (array[3] == 3)
        my_put_nbr_d_int_max(result);
    if (array[3] == 4)
        my_put_nbr_d_int_size(result);
    if (array[3] == 5)
        my_put_nbr_d_int_ptrdiff(result);
    if (array[3] == 6)
        my_put_nbr_d_signed_char(result);
    if (array[3] == 8)
        my_put_nbr_d_long_long_int(result);
}

int some_flag(int *array, long long result, va_list list)
{
    int nop = 0;
    if (array[0] == 5 && array[1] == -2) {
        special(array, result, list);
        return (-1);
    } if (array[0] != -1) {
        nop = flags(array, result);
        if (nop == -1)
            return 0;
    } if (array[2] != -1) {
        nop = precision(array, result, list);
        return (nop);
    } if (array[1] != -1) {
        nop = width(array, result, list);
        return (nop);
    } if (array[2] != -1) {
        nop = precision(array, result, list);
    } return (nop);
}

int my_d_i(va_list list, int *array)
{
    long long int result = (va_arg(list, int));
    int value = some_flag(array, result, list);
    if (value != -1)
        lenght(array, result);
}
