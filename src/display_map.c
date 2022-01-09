/*
** EPITECH PROJECT, 2021
** display_map
** File description:
** display_map
*/

#include "sokoban.h"

int display_map(t_sokoban *soko)
{
     for (int i = 0; soko->map[i]; i++){
            printw("%s\n",soko->map[i]);
        }
    return (0);
}