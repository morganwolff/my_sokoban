/*
** EPITECH PROJECT, 2021
** box
** File description:
** box
*/

#include "sokoban.h"

int *coord_box(char **tab, int box)
{
    int *coord = malloc(sizeof (int) * (box * 2) + 1);
    int x = 0;
    int y = 1;
    
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++) {
            if (tab[i][j] == 'X') {
                coord[x] = i;
                coord[y] = j;
                x += 2;
                y += 2;
            }
        }
    }
    
    return (coord);
}