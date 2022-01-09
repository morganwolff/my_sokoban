/*
** EPITECH PROJECT, 2021
** error
** File description:
** error
*/

#include "sokoban.h"

int error_map(t_sokoban soko, char **av)
{
    char *buff = read_of_map(av);
    soko.map = my_str_to_word_array(buff);
    for (int i = 0; buff[i] != '\0'; i++) { 
        if (buff[i] != '#' && buff[i] != ' ' 
        && buff[i] != 'O' && buff[i] != 'X' && buff[i] != 'P' 
        && buff[i] != '\0' && buff[i] != '\n') {
            exit (0);
        }
    }
    int nbx = nbr_x(soko.map);
    int nbo = nbr_o(soko.map);
    if (nbx == -1) return (-1);
    if (nbo == -1) return (-1);
    if (nbx != nbo) return (-1);
    return (0);
}