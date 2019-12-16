/*
** EPITECH PROJECT, 2019
** our_project
** File description:
** description
*/

#include <stdio.h>
#include "bistromatic.h"

long parse_sum(void);
long parse_product(void);
long parse_factor(void);
long parse_number(void);
long parse_formula(void);
char *my_itoa(int nb);

char *x;

long parse_sum(void)
{
    long pro1 = parse_product();
    while (*x == '+' || *x == '-') {
        if (*x == '+') {
            ++x;
            long pro2 = parse_product();
            pro1 = pro1 + pro2;
        }
        else if (*x == '-') {
            ++x;
            long pro2 = parse_product();
            pro1 = pro1 - pro2;
        }
    }
    return pro1;
}

long parse_product(void)
{
    long fac1 = parse_factor();
    while (*x == '*' || *x == '/' || *x == '%') {
        if (*x == '*') {
            ++x;
            long fac2 = parse_factor();
            fac1 = fac1 * fac2;
        }
        else if (*x == '/') {
            ++x;
            long fac2 = parse_factor();
            fac1 = fac1 / fac2;
        }
        else {
            ++x;
            long fac2 = parse_factor();
            fac1 = fac1 % fac2;
        }
    }
    return fac1;
}

long parse_factor(void)
{
    if (*x >= '0' && *x <= '9') {
        return parse_number();
    }
    else if (*x == '(') {
        ++x;
        long sum = parse_sum();
        if (*x == ')') {
            ++x;
        }
        return sum;
    }
}

long parse_number(void)
{
    long number = 0;
    while (*x >= '0' && *x <= '9') {
        number = number * 10;
        number = *x - '0';
        ++x;
    }
    return number;
}

char *eval_expr(char const *base, char *ops,
                char const *expr, unsigned int size)
{
    char *str;
    
    if (base = "0123456789") {
        if (ops = "()+-*/%") {
            x = expr;
            long result = parse_sum();
            str = my_itoa(result);
            return str;
        }
    }
}
