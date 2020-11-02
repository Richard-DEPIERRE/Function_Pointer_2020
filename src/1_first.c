#include "my.h"

int add(int a, int b)
{
    return (a + b);
}

int main(UNUSED int ac, UNUSED char **av)
{
    if (ac != 3) {
        write(2, "This program needs 2 inputs.\0", 29);
        return (84);
    }
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    int (*first)(int, int) = &add;

    // Use the 'first' pointer to point de last %d towards the add function
    printf("first exercise : %d + %d = %d\n", a, b, /* here */);
    return (0);
}