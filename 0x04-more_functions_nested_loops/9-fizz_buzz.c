#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers 1 to 100
 * prints fizz for multiples of 3
 * prints buzz for muliples of 5
 * prints fizzbuzz for multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}