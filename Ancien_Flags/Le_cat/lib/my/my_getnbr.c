/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** Vraiment pas mal ce programme
*/

int nega(int i, char const *str)
{
    int b = 0;
    i--;
    while (str[i] == 45) {
        i--;
        b++;
        if (str[i] == 43) {
            i--;
        }
    }
    if (b % 2 == 0) {
        return (0);
    } else {
        return (1);
    }
}

int ayo (int *negative, int g, char const *str)
{
    int result;
    if ((str[g] >= 48 && str[g] <= 57) &&
        ((str[g - 1] < 48) || (str[g - 1] > 57))){
        result = nega(g, str);
        if (result == 1) {
            *negative = 1;
        }
    }
}

int my_getnbr(char const *str)
{
    int i = 0, g = 0, y = 1, z = 0, negative = 0, valeur = 0;
    while (str[g] != '\0') {
        ayo(&negative, g, str);
        if ((str[g] >= 48 && str[g] <= 57) &&
            ((str[g - y] < 48) || (str[g - y] > 57))) {
            valeur = valeur * 10 + (str[g] - 48);
            y++;

        }
        if ((str[g] < 48 || str[g] > 57) &&
            (str[g - 1] >= 48 && str[g - 1] <= 57)) {
            break;
        }
        g++;
    }
    if (negative == 1) {
        valeur = valeur * (-1);
    }
    return (valeur);
}
