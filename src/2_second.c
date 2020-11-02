#include "my.h"

int add(int a, int b)
{
    return (a + b);
}

// Declare a function pointer as an argument of this function
// Remove the UNUSED once function finished
void print_function(UNUSED int a,UNUSED  int b, /*here*/)
{
    // Use this function pointer in this printf
    printf("Second exercise : %d + %d = %d\n", a, b, /* here */);
}

int main(UNUSED int ac, UNUSED char **av)
{
    print_function(3, 5, &add);
    return (0);
}