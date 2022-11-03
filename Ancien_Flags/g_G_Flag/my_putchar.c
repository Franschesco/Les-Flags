/*
** EPITECH PROJECT, 2022
** my_put_char
** File description:
** put char
*/

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
