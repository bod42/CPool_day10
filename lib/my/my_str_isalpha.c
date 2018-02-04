/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

int	my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] !='\0') {
		if (str[i] >='a' && str[i] <= 'z')
			return (1);
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}
