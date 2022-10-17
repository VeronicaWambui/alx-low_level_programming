#include <stdio>.h
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random number to the variable n
 * if the number is zero, positive, negative
 * Return: 0
 * /

int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if n(n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
