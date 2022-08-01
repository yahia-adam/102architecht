/*
** EPITECH PROJECT, 2021
** matrix.c
** File description:
** matrix.c
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES

void display_matrice(float matrice[3][3], char **av);

void print_space(float nb);

void translation(float m[3][3], char **av)
{
    float x = 0;
    float y = 0;

    m[0][0] = 1.00;
    m[0][2] = atof(av[4]);
    m[1][1] = 1.00;
    m[1][2] = atof(av[5]);
    x = (m[0][0] * atof(av[1]));
    x = x + (m[0][1] * atof(av[2])) + (m[0][2] * 1);
    y = (m[1][0] * atof(av[1]));
    y = y + (m[1][1] * atof(av[2])) + (m[1][2] * 1);
    printf("Translation along vector (%s, %s)\n", av[4], av[5]);
    display_matrice(m, av);
    printf("(%1.2f, %1.2f)\n", x, y);
}

void scaling(float m[3][3], char **av)
{
    float x = 0;
    float y = 0;

    m[0][0] = atof(av[4]);
    m[1][1] = atof(av[5]);
    x = (m[0][0] * atof(av[1]));
    x = x + (m[0][1] * atof(av[2])) + (m[0][2] * 1);
    y = (m[1][0] * atof(av[1]));
    y = y + (m[1][1] * atof(av[2])) + (m[1][2] * 1);
    printf("Scaling by factors %s and %s\n", av[4] , av[5]);
    display_matrice(m, av);
    printf("(%1.2f, %1.2f)\n", x, y);
}

int verif_0(float nb)
{
    if (nb <= -0.00 && nb > -1)
        return (0);
    else
        return (nb);
}

void rotation(float m[3][3], char **av)
{
    float x = 0;
    float y = 0;
    float r = (atof(av[4]) * (M_PI / 180));

    m[0][0] = cos(r);
    m[0][0] = verif_0(m[0][0]);
    m[0][1] = (-sin(r));
    m[0][1] = verif_0(m[0][1]);
    m[1][0] = sin(r);
    m[1][0] = verif_0(m[1][0]);
    m[1][1] = cos(r);
    m[1][1] = verif_0(m[1][1]);
    x = (m[0][0] * atof(av[1]));
    x = x + (m[0][1] * atof(av[2])) + (m[0][2] * 1);
    y = (m[1][0] * atof(av[1]));
    y = y + (m[1][1] * atof(av[2])) + (m[1][2] * 1);
    printf("Rotatin by a %s degree angle\n", av[4]);
    display_matrice(m, av);
    printf("(%1.2f, %1.2f)\n", x, y);
}

void reflexion(float m[3][3], char **av)
{
    float x = 0;
    float y = 0;
    float r = (atof(av[4]) * (M_PI / 180));

    m[0][0] = cos(2*r);
    m[0][0] = verif_0(m[0][0]);
    m[0][1] = sin(2*r);
    m[0][1] = verif_0(m[0][1]);
    m[1][0] = sin(2*r);
    m[1][0] = verif_0(m[1][0]);
    m[1][1] = (-cos(2*r));
    m[1][1] = verif_0(m[1][1]);
    x = (m[0][0] * atof(av[1]));
    x = x + (m[0][1] * atof(av[2])) + (m[0][2] * 1);
    y = (m[1][0] * atof(av[1]));
    y = y + (m[1][1] * atof(av[2])) + (m[1][2] * 1);
    printf("Reflexion over an axis with an");
    printf(" inclination angle of %s degrees\n", av[4]);
    display_matrice(m, av);
    printf("(%1.2f, %1.2f)\n", x, y);
}
