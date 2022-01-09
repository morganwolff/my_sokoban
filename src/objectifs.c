/*
** EPITECH PROJECT, 2021
** objectifs
** File description:
** objectifs
*/

#include "sokoban.h"

int *coord_objectifs(char **tab, int objectifs)
{
    int *coord = malloc(sizeof (int) * (objectifs * 2) + 1);
    int x = 0;
    int y = 1;
    
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++) {
            if (tab[i][j] == 'O') {
                coord[x] = i;
                coord[y] = j;
                x += 2;
                y += 2;
            }
        }
    }
    return (coord);
}