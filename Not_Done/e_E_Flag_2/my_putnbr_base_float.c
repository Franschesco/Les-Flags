/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** put base
*/

static int condition(int nbr)
{
    if (nbr < 0) {
        nbr = -nbr;
    }
    return (nbr);
}

char * my_putnbr_base_float(int nbr, char const *base)
{
    int len_base = my_strlen(base);
    int a = 0;
    int i = 0;

    nbr = condition(nbr);
    char *tpm = malloc(nbr + 1);
    if (nbr == 0) {
        return (1);
    } while (nbr > 0) {
        a = nbr % len_base;
        nbr /= len_base;
        tpm[i] = base[a];
        i++;
    } tpm[i] = '\0';
    my_revstr(tpm);
    return (tpm);
}
