/*
** EPITECH PROJECT, 2022
** my_f
** File description:
** flag f
*/

#include "../../include/my.h"
#include <stdio.h>

int first_array_f(va_list list, int * array, double result)
{
    if (array[0] == 2 && result >= 0) {
        my_putchar('+');
    } if (array[0] == 3)
        my_putchar(' ');
}

int show (int * array)
{
    if (array[0] == 5)
        my_putchar('0');
    else
        my_putchar(' ');
}

int seconde_array_f(va_list list, int * array, double result)
{
    int i = 0;
    int len_float = 0;
    if (array[1] >= 0 && array[2] == -1 && array[0] == 1) {
        len_float = my_put_float_len(result);
        my_put_float(result);
        while (i < array[1] - len_float) {
            show(array);
            i++;
        }
        return (-1);
    } if (array[1] >= 0 && array[2] == -1) {
        len_float = my_put_float_len(result);
        while (i < array[1] - len_float) {
            show(array);
            i++;
        }
    }
}

int my_f(va_list list, int * array)
{
    double result = (va_arg(list, double));
    int stop = which_flags_f(list, array, result);
    if (stop != -1)
        my_put_float(result);
}
