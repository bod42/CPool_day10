/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

int	my_strlen(char const *str);

char	*my_revstr(char *str)
{
	int i = 0;
	int count = my_strlen(str);
	char a;

	while (i < count / 2) {
		a = str[i];
		str[i] = str[count - i - 1];
		str[count - i - 1] = a;
		i++;
	}
	return (str);
}
