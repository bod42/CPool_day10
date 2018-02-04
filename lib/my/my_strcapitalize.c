/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

char	*my_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i - 1] >= 32 && str[i - 1] <= 47
		    || str[i - 1] == ':' || str[i - 1] == ';') {
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
