/*
** EPITECH PROJECT, 2021
** read_of_map
** File description:
** read_of_map
*/

#include "sokoban.h"

char *read_of_map(char **argv)
{
    int BUFF_SIZE = 10000;
    char *buff;
    int offset = 0;
    int len;
    int fd;

    buff = malloc(sizeof(char ) * BUFF_SIZE);
    fd = open(argv[1], O_RDONLY);
    if (fd <= -1) {
        free(buff);
        return NULL;
    }
    while ((len = read(fd, buff + offset, BUFF_SIZE - offset)) > 0) {
        if (buff[offset] != '#' && buff[offset] != ' ' 
        && buff[offset] != 'O' && buff[offset] != 'X' && buff[offset] != 'P') {
            exit (FAILURE);
        }
        offset = offset + len;
    }
    buff[offset] = '\0';
    close(fd);
    return (buff);
}