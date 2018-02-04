/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_swap(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
