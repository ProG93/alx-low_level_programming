#include "1-pi.h"
#include <stdio.h>
/**
 * main - define macro named pi
 * Return: 0
 */

int main(void)
{
	double radius = 5.0;
	double circumference = 2 * PI * radius;

	printf("Circumference of circle is  %.1f is %.2f.\n", radius, circumference);
	return (0);
}
