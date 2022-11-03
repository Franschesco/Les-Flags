/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** good prog
*/

int my_e_next(int a, int result)
{
    if (a < 10) {
        result = result + my_putchar('0');
        result = result + my_put_nbr_len(a);
    } else
        result = result + my_put_nbr_len(a);
    return (result);
}

int my_e(double nb)
{
    int result = 0, a = 0, power = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } while (nb >= 10) {
        nb = nb / 10;
        a++;
    } while (nb < 1) {
        nb = nb * 10;
        a++;
        power++;
    } result = result + my_put_float(nb);
    result = result + my_putchar('e');
    if (power == 0)
        result = result + my_putchar('+');
    else
        result = result + my_putchar('-');
    result = my_e_next(a, result);
    return (result);
}

int main (int * array)
{
}
