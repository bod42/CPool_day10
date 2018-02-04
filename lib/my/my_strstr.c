/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>
#include <stdio.h>

char	*my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int y = 0;
	char *str2 = 0;

	while (str[i] != '\0') {
		if(str[i] == to_find[y]) {
			y++;
			str2 = &str[i];
			return (str2);
		}
		i++;
	}
	return (0);
}
