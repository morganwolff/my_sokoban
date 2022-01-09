/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** 
*/

#include "sokoban.h"

int loop(t_sokoban soko, int *coord_o)
{
    while (true) {
        update_map(soko.map, coord_o);
        refresh();
        check_pos_p(&soko);
        display_map(&soko);
        soko.key_id = getch();
        if (soko.key_id == 27) break;
        move_pos_p(&soko);
        clear();
    }
    return 0;
}

int run(char **av)
{
    t_sokoban soko;
    char *buff;
    int my_o;
    int *coord_o;

    if ((buff = read_of_map(av)) == NULL) return 84;
    soko.map = my_str_to_word_array(buff);
    my_o = nbr_o(soko.map);
    coord_o = coord_objectifs(soko.map, my_o);
    if (error_map(soko, av) == -1) return (84);
    initscr();
    raw();
    noecho();
    keypad(stdscr, true);
    loop(soko, coord_o);
    free(buff);
    free(coord_o);
    endwin();
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            helper();
            exit(0);
        }  
        return (run(av));
    } 
    else return (84);
    return (0);
}