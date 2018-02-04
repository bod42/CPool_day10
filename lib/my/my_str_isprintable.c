/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

int	my_str_isprintable(char const *str)
{
	int i = 0;
	while (str[i] !='\0') {
		if (str[i] >= 32 && str[i] <= 255)
			return (1);
		i++;
	}
	return (0);
}
