#include "my.h"

int main(UNUSED int ac, UNUSED char **av)
{
    int (*p[4]) (int x, int y);
    int result;
    int i, j, op;

    // Initialise each block of the array
     = my_sum;
     = my_subtract;
     = my_mul;
     = my_div;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    printf("0: Add, 1: Subtract, 2: Multiply, 3: Divide\n");
    do {
    printf("Enter number of operation: ");
    scanf("%d", &op);
    } while(op<0 || op>3);
    // Initialise result to the correct function
    result = ; // Result
    printf("%d", result);
    return (0);
}

int my_sum(int a, int b)
{
  return a + b;
}

int my_subtract(int a, int b)
{
  return a - b;
}

int my_mul(int a, int b)
{
  return a * b;
}

int my_div(int a, int b)
{
  if(b) 
      return a / b;
  else 
      return 0;
}