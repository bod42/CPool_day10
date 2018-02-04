/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

void	my_putchar(char c);
int	my_strlen(char const *str);

int	my_putnbr_base(int nbr, char const *base)
{
	int len = my_strlen(base);
	int result;

	if (nbr == 0)
		my_putchar(base[0]);
	if (nbr > 0) {
		result = nbr % len;
		if ((nbr / len) != 0)
			my_putnbr_base((nbr / len), base);
		my_putchar(base[result]);
	}
	return (0);
}

int	my_showstr(char const *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] <= 31 || str[i] >= 128) {
			my_putchar('\\');
			if (str[i] <= 15) {
				my_putchar('0');
			}
			my_putchar(my_putnbr_base(str[i], "0123456789abcdef"));
		} else {
			my_putchar(str[i]);
		}
		i = i + 1;
	}
	return (0);
}
