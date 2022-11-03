/*
** EPITECH PROJECT, 2022
** cat
** File description:
** good prog
*/

#include "../include/my.h"
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int main_2(int ac, char **av[])
{
    int fd, size, i = 1, a;
    char buffer[30 * 1024];
    while (ac == 1) {
        a = read(0, buffer, (30 * 1024));
        if (a == 0)
            return (errno);
        my_putstr(buffer);
    }
    while (i < ac) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("Error with open\n");
            return (errno);
        }
        size = read(fd, buffer, (30 * 1024));
        write (1, buffer, size);
        close(fd);
        i++;
    }
    return (0);
}
