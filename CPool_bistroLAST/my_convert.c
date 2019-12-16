/*
** EPITECH PROJECT, 2019
** my_project
** File description:
** description
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = nb;
    if (p == 0)
        return (1);
    if (p < 0)
        return 0;
    if (p > 1)
        result = result * my_compute_power_rec(nb, p-1);
    return result;
}

char *my_itoa(int nb)
{
    int len = 1;
    int temp = nb;
    int i = 0;
    int j = 1;
    int negative = 0;
    if (temp < 0) {
        negative++;
        temp *= -1;
    }
    for (len; (temp / 10) > 0; len++)
        temp /= 10;
    char *result = malloc(sizeof(char) * (len + 1 + negative));
    if (nb < 0) {
        result[i] = '-';
        nb *= -1;
        i++;
    }
    for (i, j; i < (len + negative); i++, j++)
        result[i] = ((nb / my_compute_power_rec(10, len - j)) % 10) + 48;
    return result;
}

int my_atoi(char *str)
{
    int val;
    val=0;
    while (*str) {
        if (*str >='0' && *str <= '9') {
            val*=10;
            val +=*str - '0';
        }
        else
            return val;
        str++;
    }
    return val;
}
