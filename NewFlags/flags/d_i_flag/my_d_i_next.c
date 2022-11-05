/*
** EPITECH PROJECT, 2022
** my_d_i_next
** File description:
** the next of the d i flags
*/

#include "../../include/my.h"
#include <stdarg.h>

int array_1_number(int * array, long long result)
{
    int i = 0;
    int number = 0;
    if (array[0] == 1) {
        number = len_nbr(result);
        lenght(array, result);
        while (i < (array[1] - number)) {
            my_putchar(' ');
            i++;
        }
    } else {
        number = len_nbr(result);
        while (i < array[1] - number) {
            my_putchar(' ');
            i++;
        } lenght(array, result);
    }
}

int width (int *array, long long result, va_list list)
{
    int number = 0;
    int value = 0;
    int i = 0;
    if (array[1] >= 0) {
        array_1_number(array, result);
    } if (array[1] == -2) {
        value = va_arg(list, int);
        number = len_nbr(value);
        while (i != result - number) {
            my_putchar(' ');
            i++ ;
        } lenght(array, value);
    } return (-1);
}

int zero (int * array, long long result)
{
    int i = 0;
    int value = len_nbr(result);
    while (i < array[1] - value) {
        my_putchar('0');
        i++;
    } return (-1);
}

int flags (int *array, long long result)
{
    if (array[0] == 2) {
        if (result >= 0)
            my_putchar('+');
        return 0;
    } if (array[0] == 3) {
        if (result >= 0)
            my_putchar(' ');
    } if (array[0] == 5) {
        if (array[1] > 0)
            zero(array, result);
    }
}
