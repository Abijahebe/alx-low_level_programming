/*
 * File: 4-pow_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * @y: The power.
 * Return: pow recursion.
 */
int _pow_recursion(int x, int y)
{
int result = x;

if (y < 0) /*Base condition*/
{
return (-1);
}

else if (y == 0)
return (1);

result *= _pow_recursion(x, y - 1); /*recursive call*/

return (result);
}
