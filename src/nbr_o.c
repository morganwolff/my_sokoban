/*
** EPITECH PROJECT, 2021
** nbr_o
** File description:
** nbr_o
*/

#include "sokoban.h"

int nbr_o(char **map)
{
    int i = 1;
    int j = 1;
    int nbr = 0;

    for (; map[i]; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O') {
                nbr++;
            }
        }
    }
    if (nbr == 0) return (-1);
    return (nbr);
}
