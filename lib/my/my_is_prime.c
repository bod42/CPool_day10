/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

int	my_is_prime(int nb)
{
	int i = 2;

	while (i < nb) {
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
