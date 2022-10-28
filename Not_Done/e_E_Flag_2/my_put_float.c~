/*
** EPITECH PROJECT, 2022
** my_put_flot
** File description:
** good prog
*/

static int zerozero (void)
{
    int i = 0;
    my_putchar('0');
    my_putchar('.');
    while (i < 6) {
        my_putchar('0');
        i++;
    }
    return (8);
}

static int after (int * length, int size, int a, char * str)
{
    int i = 0, b = 0;
    if (i == (size - a)) {
        my_putchar('0');
        ++*length;
    } while (i < (size - a)) {
        my_putchar(str[i]);
        i++;
        ++*length;
    } my_putchar('.');
    ++*length;
    while (i < size) {
        my_putchar(str[i]);
        i++;
        b++;
        ++*length;
    } while (b < 6) {
        my_putchar('0');
        b++;
        ++*length;
    }
}

double before (int *length, double nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        ++*length;
        return (nb);
    } return (nb);
}

int my_put_float (double nb)
{
    int length = 0, a = 0, size = 0;
    nb = before(&length, nb);
    int how = nb;
    char *str;
    while (nb != how) {
        nb = nb * 10.00;
        how = nb;
        a++;
    } if (a == 0) {
        return (zerozero());
    }size = my_putnbr_base_len(how, "0123456789");
    str = my_putnbr_base_float(how, "0123456789");
    after (&length, size, a, str);
    free(str);
    return (length);
}
