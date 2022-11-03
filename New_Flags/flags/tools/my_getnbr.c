/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** returns a number
*/

int my_getnbr(char const *str, int *i)
{
    int x = 1;
    long nbr = 0;

    if ((str[*i] < 48 || str[*i] > 57) || str[*i] == '\0')
        return (-1);
    for (*i; (str[*i] >= 48 && str[*i] <= 57) && str[*i] != '\0'; ++*i) {
        nbr += str[*i] - '0';
        if (nbr > 2147483647)
            return (0);
        nbr *= 10;
    }
    nbr /= 10;
    return ((int) (nbr * x));
}
