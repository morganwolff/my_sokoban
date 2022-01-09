/*
** EPITECH PROJECT, 2021
** sokoban.h
** File description:
** 
*/

#ifndef SOKOBAN_H
#define SOKOBAN_H

#define SUCCESS 0
#define FAILURE 84

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <signal.h>
#include <dirent.h>
#include <ncurses.h>
#include <curses.h>
#include <fcntl.h>

typedef struct s_position
{
    int x;
    int y;
} t_position;

typedef struct s_positionx
{
    int x;
    int y;
}t_positionx;

typedef struct s_nbr_o{
    char **map;
    int i;
    int j;
    int nbr;
}t_nbr_o;

typedef struct s_nbr_x{
    char **map;
    int i;
    int j;
    int nbr;
}t_nbr_x;

typedef struct s_coord_box{
    char **tab;
    int *coord;
    int box;
    int x;
    int y;
}t_coord_box;

typedef struct s_coord_objectifs{
    char **tab;
    int *coord;
    int box;
    int x;
    int y;
}t_coord_objectifs;

typedef struct s_sokoban
{
    char    **map;
    int     win;
    t_position p;
    t_positionx x;
    t_coord_box box;
    t_coord_objectifs obj;
    t_nbr_o nbo;
    t_nbr_x nbx;
    int key_id;
} t_sokoban;

int my_putstr(char const *str);
void my_putchar(char c);  
int my_put_nbr(int nb);
int my_strlen(char const *str);
void my_printf(char *src, ...);
char *my_strcat(char *dest, char const *src);
char **my_str_to_word_array(char const *str);

char *read_of_map(char **argv);
int display_map(t_sokoban *);
int nbr_o(char **map);
int nbr_x(char **map);
int check_is_o(char **map);
int *coord_objectifs(char **tab, int objectifs);
int *coord_box(char **tab, int box);
void check_pos_x(t_sokoban *soko);
void update_map(char **map, int *coord_o);
void check_pos_p(t_sokoban *);
int move_pos_p(t_sokoban *);
void helper(void);
int error_map(t_sokoban soko, char **av);

#endif
