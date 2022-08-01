/*
** EPITECH PROJECT, 2021
** eyrtg
** File description:
** strg
*/

#ifndef architect
#define architect

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES

int rigor(int ac, char **av);
void reflexion(float matrice[3][3], char **av);
void scaling(float matrice[3][3], char **av);
void usage(int ac, char **av);
void translation(float matrice[3][3], char **av);
void rotation(float matrice[3][3], char **av);
void mult_matrix_vector(float v [3][1]);
void mult_tow_matrix_test(float v[3][3]);
void mult_matrix(int ac, char **av);

#endif /* !architect */
