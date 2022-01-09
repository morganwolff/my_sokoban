/*
** EPITECH PROJECT, 2021
** check_pos_x
** File description:
** check_pos_x
*/

#include "sokoban.h"

void check_pos_x(t_sokoban *soko)
{
    int i = 1;
    int j = 1;

    for (; soko->map[i]; i++) {
        for (j = 0; soko->map[i][j] != '\0'; j++) {
            if (soko->map[i][j] == 'P') {
                soko->x.y = i;
                soko->x.x = j;
            }
        }
    }
}