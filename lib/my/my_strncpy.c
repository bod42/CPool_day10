/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

char	*my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (src[i] != '\0') {
		if (i < n) {
			dest[i] = src[i];
		}
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
