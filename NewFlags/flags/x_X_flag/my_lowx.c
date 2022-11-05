/*
** EPITECH PROJECT, 2022
** my_x
** File description:
** Flags X
*/

#include "../../include/my.h"
#include <stdarg.h>

int third_next_lowx(va_list list, int * array, long long int result)
{
    int i = 0;
    int value = 0;
    int new_value = 0;
    if (array[2] == -2) {
        new_value = va_arg(list, long int);
        value = len_nbr_base(new_value, "0123456789abcdef");
        while (i < result - value) {
            my_putchar('0');
            i++;
        } what_put_nbr_o_lowx(list, array, new_value);
        return (-1);
    } return (0);
}

int third_array_lowx(va_list list, int * array, long long int result)
{
    int i = 0;
    int value = 0;
    int stop = 0;
    if (array[2] >= 0) {
        value = len_nbr_base(result, "0123456789abcdef");
        while (i < array[2] - value) {
            my_putchar('0');
            i++;
        }
    } stop = third_next_lowx(list, array, result);
    return (stop);
}

int which_flag_lowx(va_list list, int * array, long long int result)
{
    int stop = 0;
    if (array[0] != -1)
        first_array_lowx(list, array, result);
    if (array[1] != -1) {
        stop = seconde_array_lowx(list, array, result);
        if (stop == -1)
            return (-1);
    } if (array[2] != -1)
        stop = third_array_lowx(list, array, result);
    return (stop);
}

int my_lowx(va_list list, int * array)
{
    long long int result = va_arg(list, long int);
    int stop = 0;
    while (result < 0)
        result += 4294967295;
    stop = which_flag_lowx(list, array, result);
    if (stop != -1)
        what_put_nbr_o_lowx(list, array, result);
}
