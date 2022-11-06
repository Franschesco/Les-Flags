/*
** EPITECH PROJECT, 2022
** my_f_next
** File description:
** the next of my_f
*/

#include "../../include/my.h"
#include <stdio.h>

int third_array_f(va_list list, int * array, double result)
{
    int i = 0;
    int len_float = 0;
    if (array[2] >= 0 && array[1] >= 0 && array[0] == 1) {
        len_float = my_put_float_condition_len(result, array[2]);
        my_put_float_condition(result, array[2]);
        while (i < array[1] - len_float) {
            show(array);
            i++;
        }
        return (-1);
    } if (array[2] >= 0 && array[1] >= 0) {
        len_float = my_put_float_condition_len(result, array[2]);
        while (i < array[1] - len_float) {
            show(array);
            i++;
        } my_put_float_condition(result, array[2]);
        return (-1);
    } if (array[2] >= 0)
        my_put_float_condition(result, (array[2]));
}

int which_flags_f(va_list list, int * array, double result)
{
    int stop = 0;
    if (array[0] != -1)
        first_array_f(list, array, result);
    if (array[1] != -1) {
        stop = seconde_array_f(list, array, result);
        if (stop == -1)
            return (stop);
    } if (array[2] != -1) {
        third_array_f(list, array, result);
        return (-1);
    }
        return 0;
}
