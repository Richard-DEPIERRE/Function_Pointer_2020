/*
** EPITECH PROJECT, 2020
** Function Pointers
** File description:
** function pointers
*/

#ifndef FUNCTION_PT
#define FUNCTION_PT

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define UNUSED __attribute__((unused))

int my_sum(int a, int b);
int my_subtract(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_modulo(int a, int b);
void affiche_sup();
void affiche_inf();

#endif /* !FUNCTION_PT */