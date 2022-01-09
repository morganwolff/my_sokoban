/*
** EPITECH PROJECT, 2021
** update_map
** File description:
** update_map
*/

#include "sokoban.h"

void update_map(char **map, int *coord_o)
{
    for (int i = 0; coord_o[i]; i += 2) {
        if (map[coord_o[i]][coord_o[i + 1]] == ' ')
            map[coord_o[i]][coord_o[i + 1]] = 'O';
    }
}
