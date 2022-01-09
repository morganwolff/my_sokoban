/*
** EPITECH PROJECT, 2021
** move_pos_p
** File description:
** move_pos_p
*/

#include "sokoban.h"

void can_i_move_up(t_sokoban *soko)
{
    if (soko->map[soko->p.y- 1][soko->p.x] == '#')
        return;
    if (soko->map[soko->p.y- 1][soko->p.x] == 'X' && soko->map[soko->p.y- 2][soko->p.x] == ' ') {
        soko->map[soko->p.y- 2][soko->p.x] = soko->map[soko->p.y- 1][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y- 1][soko->p.x] = 'P';
    }
    if (soko->map[soko->p.y- 1][soko->p.x] == 'X' && soko->map[soko->p.y- 2][soko->p.x] == 'O') {
        soko->map[soko->p.y- 2][soko->p.x] = soko->map[soko->p.y- 1][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y- 1][soko->p.x] = 'P';
    }
    if (soko->map[soko->p.y- 1][soko->p.x] == ' ') {
        soko->map[soko->p.y- 1][soko->p.x] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
    if (soko->map[soko->p.y- 1][soko->p.x] == 'O') {
        soko->map[soko->p.y- 1][soko->p.x] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
}

void can_i_move_down(t_sokoban *soko)
{
    if (soko->map[soko->p.y+ 1][soko->p.x] == '#')
        return;
    if (soko->map[soko->p.y+ 1][soko->p.x] == 'X' && soko->map[soko->p.y+ 2][soko->p.x] == ' ') {
        soko->map[soko->p.y+ 2][soko->p.x] = soko->map[soko->p.y+ 1][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y+ 1][soko->p.x] = 'P';
    }
    if (soko->map[soko->p.y+ 1][soko->p.x] == 'X' && soko->map[soko->p.y+ 2][soko->p.x] == 'O') {
        soko->map[soko->p.y+ 2][soko->p.x] = soko->map[soko->p.y+ 1][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y+ 1][soko->p.x] = 'P';
    }
    if (soko->map[soko->p.y+ 1][soko->p.x] == ' ') {
        soko->map[soko->p.y+ 1][soko->p.x] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
    if (soko->map[soko->p.y+ 1][soko->p.x] == 'O') {
        soko->map[soko->p.y+ 1][soko->p.x] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
}

void can_i_move_left(t_sokoban *soko)
{
    if (soko->map[soko->p.y][soko->p.x- 1] == '#')
        return;
    if (soko->map[soko->p.y][soko->p.x- 1] == 'X' && soko->map[soko->p.y][soko->p.x- 2] == ' ') {
        soko->map[soko->p.y][soko->p.x- 2] = soko->map[soko->p.y][soko->p.x- 1];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y][soko->p.x- 1] = 'P';
    }
    if (soko->map[soko->p.y][soko->p.x- 1] == 'X' && soko->map[soko->p.y][soko->p.x- 2] == 'O') {
        soko->map[soko->p.y][soko->p.x- 2] = soko->map[soko->p.y][soko->p.x- 1];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y][soko->p.x- 1] = 'P';
    }
    if (soko->map[soko->p.y][soko->p.x- 1] == ' ') {
        soko->map[soko->p.y][soko->p.x- 1] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
    if (soko->map[soko->p.y][soko->p.x- 1] == 'O') {
        soko->map[soko->p.y][soko->p.x- 1] = soko->map[soko->p.y][soko->p.x];
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
}

void can_i_move_rigth(t_sokoban *soko)
{
    if (soko->map[soko->p.y][soko->p.x+ 1] == '#')
        return;
    if (soko->map[soko->p.y][soko->p.x+ 1] == 'X' && soko->map[soko->p.y][soko->p.x+ 2] == ' ') {
        soko->map[soko->p.y][soko->p.x+ 2] = soko->map[soko->p.y][soko->p.x+ 1];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y][soko->p.x+ 1] = 'P';
    }
    if (soko->map[soko->p.y][soko->p.x+ 1] == 'X' && soko->map[soko->p.y][soko->p.x+ 2] == 'O') {
        soko->map[soko->p.y][soko->p.x+ 2] = soko->map[soko->p.y][soko->p.x+ 1];
        soko->map[soko->p.y][soko->p.x] = ' ';
        soko->map[soko->p.y][soko->p.x+ 1] = 'P';
    }
    if (soko->map[soko->p.y][soko->p.x+ 1] == ' ') {
        soko->map[soko->p.y][soko->p.x+ 1] = 'P';
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
    if (soko->map[soko->p.y][soko->p.x+ 1] == 'O') {
        soko->map[soko->p.y][soko->p.x+ 1] = 'P';
        soko->map[soko->p.y][soko->p.x] = ' ';
    }
}

int move_pos_p(t_sokoban *soko)
{
    switch (soko->key_id) {
        case KEY_UP:
            can_i_move_up(soko);
            break;
        case KEY_DOWN:
            can_i_move_down(soko);
            break;
        case KEY_LEFT:
            can_i_move_left(soko);
            break;
        case KEY_RIGHT:
            can_i_move_rigth(soko);
            break;
        default:
            break;
    }
    return (0);
}