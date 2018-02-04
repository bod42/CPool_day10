/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

int	my_compute_square_root(int nb)
{
	int i = 1;

	if (nb >= '0' && nb <= '9')
		return (0);
	while ((i * i) < nb) {
		i++;
	}
	if ((i * i) != nb)
		return (0);
	if (i > nb)
		return (0);
	return (i);
}
