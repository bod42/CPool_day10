/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

void	my_swap(int *a, int *b);

void	my_sort_int_array(int *tab, int size)
{
	int i = 0;
	int j = 0;
	while(tab[i] != '\0') {
		while (j < size) {
			j++;
			if (tab[j] > tab[j + 1])
				my_swap(&i, &j);
		}
		i++;
	}
}
