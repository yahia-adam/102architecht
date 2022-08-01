/*
** EPITECH PROJECT, 2021
** handling error
** File description:
** ejhbkf
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFI

int int_error(char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++)
        if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-'
        && str[i] != '.' && str[i] != ' ')
        return (0);
    return (1);
}

int rigor(int ac, char **av)
{
    if (ac < 5)
        return (84);
    if ( ac == 6) {
        if (strcmp(av[3], "-t") != 0  && strcmp(av[3], "-z") != 0)
            return (84);
        if (int_error(av[1]) == 0 || int_error(av[2]) == 0
        || int_error(av[4]) == 0 || int_error(av[5]) == 0)
            return (84);
    }
    if ( ac == 5) {
        if (strcmp(av[3], "-r") != 0  && strcmp(av[3], "-s") != 0)
            return (84);
        if (atof(av[4]) < 0)
            return (84);
    }
    if (int_error(av[1]) == 0 || int_error(av[2]) == 0
    || int_error(av[4]) == 0)
        return (84);
    return (0);
}
