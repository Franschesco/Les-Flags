/*
** EPITECH PROJECT, 2022
** grep
** File description:
** good prog
*/

#include "../include/my.h"
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int main(int ac, char **av[])
{
    int fd, size, i = 2, a;
    char buffer[30 * 1024];
    while (i < ac) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("Error with open\n");
            return (errno);
        }
        size = read(fd, av[1], (30 * 1024));
        write (1, buffer, size);
        close(fd);
        i++;
    }
    return (0);
}
