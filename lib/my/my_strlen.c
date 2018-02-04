/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
