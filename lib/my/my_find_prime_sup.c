/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

int	prime(int nb)
{
	int i = 2;

	while (i < nb) {
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	my_find_prime_sup(int nb)
{
	while (prime(nb) == 0)
		nb++;
	return (nb);
}
