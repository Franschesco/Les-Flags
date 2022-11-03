/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** flag d and i
*/

#include "../../include/my.h"
#include <stdarg.h>

int array_1_number(int * array, int result)
{
    int i = 0;
    int number = 0;
    if (array[0] ==  1) {
        number = len_nbr(result);
        my_putchar(' ');
        my_putnbr_len(result);
        while (i < (number - 1)) {
            my_putchar(' ');
            i++;
        }
    } else {
        number = len_nbr(result);
        my_putnbr_len(result);
        while (i < number) {
            my_putchar(' ');
            i++;
        }
    }
}

int width (int *array, int result, va_list list)
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
        } my_putnbr_len(value);
    }
}

int flags (int *array, int result)
{
    if (array[0] == 2) {
        if (result >= 0)
            my_putchar('+');
    } if (array[0] == 3) {
        if (result >= 0)
            my_putchar(' ');
    }
}

int precision (int *array, int result, va_list list)
{
    int value = 0;
    int number = 0;
    int i = 0;
    if (array[2] >= 0) {
        value = len_nbr(result);
        while (i != array[2] - value)
            my_putchar('0');
        my_putnbr_len(result);
    }  if (array[2] == -2) {
        value = va_arg(list, int);
        number = len_nbr(value);
        while (i != result - number)
            my_putchar('0');
        my_putnbr_len(value);
    }
}

int some_flag(int *array, int result, va_list list)
{
    if (array[0] != -1)
        flags(array, result);
    if (array[1] != -1) {
        width(array, result, list);
    } if (array[2] != -1) {
        precision(array, result, list);
    } if (array[3] != -1) {
        // length();
    }
}

int my_d_i(va_list list, int *array)
{
    printf("Bonjour");
    return 0;
    int result = (va_arg(list, int));
    int back = some_flag(array, result, list);
    if (result == -2147483648) {
        my_putstr("-2147483648");
        return (11);
    }
    back = back + my_put_nbr_len(result);
}
