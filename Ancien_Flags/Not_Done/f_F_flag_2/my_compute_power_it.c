/*
** EPITECH PROJECT, 2022
** my_compute_power_it
** File description:
** La mouli elle est gentille
*/

int my_compute_power_it(int nb, int p)
{
    int result = nb;
    if (p < 0){
        result = 0;
    }else if (p == 0){
        result = 1;
    }
    while ( p > 1) {
        result = result * nb;
        p--;
    }
    return (result);
}
