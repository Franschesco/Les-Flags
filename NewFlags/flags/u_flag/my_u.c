/*
** EPITECH PROJECT, 2022
** my_u
** File description:
** flag u
*/

#include "../../include/my.h"
#include <stdarg.h>

int what_flags(va_list list, int * array, long long int result)
{
    int stop = 0;
    if (array[1] != -1)
        stop = array_two(list, array, result);
    if (array[2] != -1)
        array_three(list, array, result);
    return (stop);
}

int what_put_nbr(va_list list, int * array, long long int result)
{
    if (array[3] == -1) {
        my_put_nbr_u(result);
    }  if (array[3] == 1) {
        my_put_nbr_u(result);
    }  if (array[3] == 2) {
        my_put_nbr_u(result);
    }  if (array[3] == 3) {
        my_put_nbr_u(result);
    }  if (array[3] == 4) {
        my_put_nbr_u(result);
    }  if (array[3] == 5) {
        my_put_nbr_u(result);
    }  if (array[3] == 6) {
        my_put_nbr_u(result);
    }  if (array[3] == 7) {
        my_put_nbr_u(result);
    }
}

int my_u(va_list list, int * array)
{
    long long int result = (va_arg(list, int));
    int stop = what_flags(list, array, result);
    if (stop != -1)
        what_put_nbr(list, array, result);
}
