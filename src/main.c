/*
** EPITECH PROJECT, 2021
** main.C
** File description:
** main.c
*/

#include "architect.h"

void print_space(float nb)
{
    if (nb < 0)
        printf("  ");
    else
        printf("   ");
}

void display_matrice(float matrice[3][3], char **av)
{
    printf("%1.2f", matrice[0][0]);
    print_space(matrice[0][0]);
    printf("%1.2f", matrice[0][1]);
    print_space(matrice[0][1]);
    printf("%1.2f\n", matrice[0][2]);
    printf("%1.2f", matrice[1][0]);
    print_space(matrice[1][0]);
    printf("%1.2f", matrice[1][1]);
    print_space(matrice[1][1]);
    printf("%1.2f\n", matrice[1][2]);
    printf("%1.2f", matrice[2][0]);
    print_space(matrice[2][0]);
    printf("%1.2f", matrice[2][1]);
    print_space(matrice[2][1]);
    printf("%1.2f\n", matrice[2][2]);
    printf("(%1.2f, %1.2f) => ", atof(av[1]), atof(av[2]));
}

int main(int ac, char **av)
{
    float matrice[3][3] = {
        {0.00, 0.00, 0.00},
        {0.00, 0.00, 0.00},
        {0.00, 0.00, 1.00},
    };
    usage(ac, av);
    if (rigor(ac, av) == 84)
        return 84;
    if (ac <= 6) {
        if (av[3][1] == 't')
            translation(matrice, av);
        if (av[3][1] == 'z')
            scaling(matrice, av);
        if (av[3][1] == 'r')
            rotation(matrice, av);
        if (av[3][1] == 's')
            reflexion(matrice, av);
    }
    return (0);
}
