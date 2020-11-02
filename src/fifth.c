
#include "my.h"

typedef struct funct_s {
    char c;
    // Finish this structure to have a function pointer
    // Here;
} funct_t;

static funct_t funct[5] = {
    {'+', my_sum},
    {'-', my_subtract},
    {'*', my_mul},
    {'/', my_div},
    {'%', my_modulo}
};

int main(int ac, char **av)
{
    if (ac != 4) {
        write(2, "This program needs 3 inputs.\0", 29);
        return (84);
    }
    int a = atoi(av[1]);
    char c = av[2][0];
    int b = atoi(av[3]);
    if (a == 0 || b == 0 || (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')) {
        write(2, "First and third input have to be numbers > 0 and second \
        character has to be an operator.\0", 29);
        return (84);
    }
    for (int j = 0; j < 5; j += 1){
        // How can you know what function you need to use ?
        // Figure out the condition for this if function
        if (/* Here */) {
            // Input the corresponding function
            printf("Fifth solution is : %d %c %d = %d\n", a, c, b, /* Here */);
        }
    }
    return (0);
}

int my_sum(int a, int b)
{
  return (a + b);
}

int my_subtract(int a, int b)
{
  return (a - b);
}

int my_mul(int a, int b)
{
  return (a * b);
}

int my_div(int a, int b)
{
  if(b) 
      return (a / b);
  else 
      return (0);
}

int my_modulo(int a, int b)
{
  if(b) 
      return (a % b);
  else 
      return (0);
}