#include "my.h"

void (*affiche(int a, int b))()
{
    if (a >= b)
        return &affiche_sup;
    return &affiche_inf;
}

int main(int ac, char **av)
{
    if (ac != 3) {
        write(2, "This program needs 2 inputs.\0", 29);
        return (84);
    }
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    // Declare the function pointer called 'third'
    void ; // Declaration
    third = ; // Assignement
    ; // Call of the function
    return (0);
}

void affiche_sup()
{
    printf("a est supérieur ou égale à b\n");
}

void affiche_inf()
{
    printf("a est inférieur à b\n");
}
