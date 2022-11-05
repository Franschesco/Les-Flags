/*
** EPITECH PROJECT, 2022
** specifier
** File description:
** array specifier
*/
#include "include/my.h"
#include <stdarg.h>

static int flags(char *str, int *i)
{
    char flags[] = {'-', '+', ' ', '#', '0'};
    for (int j = 0; j < 5; ++j) {
        if (flags[j] == str[*i]) {
            ++*i;
            return (j + 1);
        }
    }
    return (-1);
}

static int width(char *str, int *i)
{
    if (str[*i] == '*') {
        ++*i;
        return (-2);
    }
    return (my_getnbr(str, i));
}

static int precision(char *str, int *i)
{
    if (str[*i] == '.') {
        ++*i;
        if (str[*i] == '*') {
            ++*i;
            return (-2);
        }
        return (my_getnbr(str, i));
    }
    return (-1);    
}

static int length(char *str, int *i)
{
    char length[] = {'h', 'l', 'j', 'z', 't', 'L', '\0'};

    if (str[*i] == 'h' && str[*i + 1] == 'h') {
        return (7);
    }
    if (str[*i] == 'l' && str[*i + 1] == 'l') {
        return (8);
    }
    for (int j = 0; length[j] != '\0'; j++) {
        if (str[*i] == length[j])
            return (j + 1);
    }
    return (-1);
}

int *specifier(char *str, int *array)
{
    int i = 0;
    //printf("i = %d\n", i);
    array[0] = flags(str, &i);
    //printf("i = %d\n", i);
    array[1] = width(str, &i);
    //printf("i = %d\n", i);
    array[2] = precision(str, &i);
    //printf("i = %d\n", i);
    array[3] = length(str, &i);
    //printf("i = %d\n", i);
    return (array);
}
/*
int main(void)
{
    char sub[] = "-34.35h";
    int array[4];
    int *lol = specifier(sub, array);
    for (int i = 0; i < 4; i++) {
        printf("%d\n", lol[i]);
    }
}*/

