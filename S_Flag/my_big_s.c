/*
** EPITECH PROJECT, 2022
** my_big_s
** File description:
** good prog
*/

int number_of_zero(int number, int *length)
{
    if (number < 8) {
        my_putstr("00");
        return (2);
    }
    if (number < 64) {
        my_putchar('0');
        return (1);
    } return (0);
}

int what_number (char *str, int i, int *length)
{
    int number = 0,  a = -1;
    number = number + (str[i] - 48);
    while (str[i + 1] >= 48 && str[i + 1] <= 57) {
        number = number * 10;
        i++;
        number = number + (str[i] - 48);
    } if (number < 32 || number > 126) {
        *length = *length + my_putchar(92);
        *length = *length + number_of_zero(number, &length);
        return (a + my_putnbr_base_o(number, "01234567"));
    } else {
        my_putchar(number);
        if (number >= 10) {
            a = a + 1;
            --*length;
        } if (number >= 100) {
            a = a + 2;
            *length = *length - 1;
        } return (a);
    }
}

int is_a_zero(char *str, int i, int *length)
{
    if (str[i] != 48 || (str[i] == 48
        && (str[i + 1] < 48 || str[i + 1] > 57))) {
        if (str[i] == 48) {
            my_putchar(92);
            my_putstr("00");
            *length = *length + 3;
        } my_putchar(str[i]);
    } else
        --*length;
    return (0);
}

int my_big_s(char *str)
{
    int i = 0;
    int length = 0;
    int a = 0;
    while (str[i] != '\0') {
        a = 0;
        if (str[i] <= 48 || str[i] > 57 && str[i] >= 32 & str[i] < 127) {
            is_a_zero(str, i, &length);
            a++;
        } if ((str[i - 1] > 57 || str[i - 1] <= 48) && a == 0){
                i = i + what_number(str, i, &length);
        }
        i++;
    } return (i + length);
}

int main (void)
{
    int result = my_big_s("Salut1000ZAs");
    return (result);
}
