/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** 
*/

#include "sokoban.h"

int my_put_nbr(int nb)
{
    int res = 0;
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while (nb > 9) {
        i = 1;
        res = nb;
        while (res > 9) {
            res /= 10;
            i *= 10;
        }
        nb = nb - (i * res);
        my_putchar(res + 48);
    }
    my_putchar(nb + 48);
    return (0);
}
