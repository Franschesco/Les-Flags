/*
** EPITECH PROJECT, 2022
** my_u_next
** File description:
** the next u flags
*/

#include "../../include/my.h"
#include <stdarg.h>

int writing_fonction(va_list list, int * array, long long int result)
{
    if (array[0] == 5)
        my_putchar('0');
    else
        my_putchar(' ');
}

int array_two_next(va_list list, int * array, long long int result)
{
    int new_value = 0;
    int i = 0;
    int value = 0;
    if (array[1] == -2) {
        new_value = (va_arg(list, int));
        value = len_nbr(new_value);
        if (array[0] == 1)
            what_put_nbr(new_value);
        while (i < result - value) {
            writing_fonction(list, array, result);
            i++;
        } if (array[0] != 1)
            what_put_nbr(new_value);
        return (-1);
    }
}

int array_two(va_list list, int * array, long long int result)
{
    int value = 0;
    int i = 0;
    int stop = 0;
    if (array[1] >= 0 && array[0] == 1) {
        what_put_nbr(list, array, result);
        value = len_nbr(result);
        while (i < array[1] - value) {
            writing_fonction(list, array, result);
            i++;
        } return -1;
    } if (array[1] >= 0) {
        value = len_nbr(result);
        while (i < array[1] - value) {
            writing_fonction(list, array, result);
            i++;
        } return 0;
    } stop = array_two_next(list, array, result);
    return (stop);
}

int array_three(va_list list, int * array, long long int result)
{
    int i = 0;
    int value = 0;
    if (array[2] >= 0) {
        value = len_nbr(result);
        while (i < array[2] - value) {
            my_putchar('0');
            i++;
        } what_put_nbr(list, array, result);
    }
}
