#include "fct.h"

#include <time.h>

int main()
{
    struct Particule p0 = {0, {255, 0, 0}};
    struct Particule p1 = {1, {0, 255, 0}};
    struct Particule p2 = {2, {0, 0, 255}};
    struct Particule p3 = {3, {255, 255, 0}};

    struct Particule liste_particule[] = {p0, p1, p2, p3};

    srand(time(NULL))

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            liste_particule[i].matrice[j] = (rand() % 1000) / 1000;
        }
    }



    return 0;
}