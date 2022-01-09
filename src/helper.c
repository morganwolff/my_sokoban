/*
** EPITECH PROJECT, 2021
** helper.c
** File description:
** helper
*/

#include "sokoban.h"

void helper(void)
{
	my_putstr("USAGE\n");
	my_putstr("     ./my_sokoban map\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("     map file representing the warehouse map, containing '#'");
	my_putstr(" for walls, \n");
	my_putstr("     ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage ");
	my_putstr("locations.\n");
	my_putstr("     To move the 'P' you must use the arrows 'KEY_UP', ");
	my_putstr("'KEY_DOWN', 'KEY_LEFT'\n");
	my_putstr("     and 'KEY_RIGHT'. To quit the game you must finish the ");
	my_putstr("map or press the 'esc' key.\n");
}