/*
** EPITECH PROJECT, 2022
** my_a
** File description:
** good prog
*/

int my_a (double nb)
{
    double temp = nb;
    int real = nb;
    int a = 1;
    while (nb != real) {
        nb = nb * 10;
        real = nb;
        a++;
    } my_putnbr_base_a(temp, "0123456789abcdef", a);
    return (result);
}

int main ()
{
    int result = my_a(3.21);
    return (result);
}
