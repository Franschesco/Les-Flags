/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** printf function from the C library according to the C99 standar.
*/
#include "include/my.h"
#include <stdarg.h>
//#include <stdlib.h>

static int flags(const char *restrict format, int * i)
{
    int count = 0;
    char flag[] = {'d', 'i', 'u', 'o', 'x', 'X', 'f', 'F', '%',
                    'c', 's', 'e', 'E', 'g', 'G', '\0'};
    for (count; flag[count] != '\0'; count++) {
        //printf("%c, *i = %d\n", flag[count], *i);
        if (flag[count] == format[*i + 1])
            return (count);
    }
    return (-1);
}

/*
static int special_cases(const char *restrict format, int *i, int *count)
{
    if (format[*i + 1] == '\0')
        return (-1);
    if (flags(format, i) == -1 && format[*i + 1] != ' ') {
        my_putchar('%');
        ++*count;
        *i -= 1;
        return (1);
    }
    return (0);
}

static int space(const char *restrict format, int *i, int *count)
{
    int sp = special_cases(format, i, count);
    if (sp == -1)
        return (-1);
    if (sp == 1)
        return (0);
    for (*i; *i < my_strlen(format); ++*i) {
        if (format[*i + 1] == '\0')
            return (-1);
        if (flags(format, i) != -1) {
            return (1);
        }
        if (format[*i + 1] != ' ') {
            my_putchar('%');
            ++*count;
            *i -= 2;
            return (0);
        }
    }
}
*/

char *cut(const char *restrict format, int *i)
{
    //printf("i = %d\n", *i);
    int k = *i + 1;
    int j = *i;
    char *str;
    //printf("k = %d\n", k);
    /*if (flags(format, &k) == -1)
      return ("");*/
    for (k; flags(format, &k) == -1; k++);
    //printf("k = %d\n", k);
    str = malloc(sizeof(char) * (k - *i + 1));
    for (j; j < k; j++) {
        //printf("%d\n", j - *i);
        str[j - *i] = format[j + 1];
    }
    str[(j - *i) + 1] = '\0';
    return (str);
    
}

static int conditions(const char *restrict format, va_list list, int *i, int *count)
{
    //int stop = 0;
    int tpm[4];
    char *str = cut(format, i);
    int *sub_flag = specifier(str, tpm);
    int (*point[])(va_list, int *) = {&my_d_i, &my_d_i, &my_u, &my_o,
        &my_lowx, &my_upx, &my_f, &my_f, &my_percentage, &my_c,
        &my_s, &my_low_e, &my_up_e, &my_low_g, &my_up_g};
    //printf("\n\nl = %s\n\n", sub_flag);
    /*for (int i = 0; i < 4; i++) {
        printf("%d\n", sub_flag[i]);
    }
    return (0);*/
    //stop = space(format, i, count);
    //if (stop == 1)
    *count += point[flags(format, i)](list, sub_flag);
    //if (stop == -1)
    //  return (-1);
    //printf("len = %d\n", *i);
    *i += my_strlen(str) + 1;
    return (0);
}

int my_printf(const char *restrict format, ...)
{
    va_list list;
    int count = 0;
    int stop = 0;

    va_start(list, format);
    for (int i = 0; i < my_strlen(format) && stop > -1; i++) {
        if (format[i] == '%')
            stop = conditions(format, list, &i, &count);
        else {
            my_putchar(format[i]);
            count++;
        }
    }
    if (stop == -1)
        return (-1);
    va_end(list);
    return (count);
}