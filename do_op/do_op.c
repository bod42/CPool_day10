/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>
#include "../include/my.h"

void	neg(int result)
{
	 if (result < 0) {
		 result = result * - 1;
		 my_putchar('-');
		 my_put_nbr(result);
	 }

}
int	do_op(int ac, char **av)
{
	(void)ac;
	(void)av;
	int i = 2;
	int result = 0;

	if (av[i][0] == '+') {
		result = my_getnbr(av[i -1 ]) + my_getnbr(av[i + 1]);
		my_put_nbr(result);
	}
	if (av[i][0] == '-') {
		result = my_getnbr(av[i -1 ]) - my_getnbr(av[i + 1]);
		neg(result);
	}
	if (av[i + 1][0] > 48 && av[i][0] == '/') {
                result = my_getnbr(av[i -1 ]) / my_getnbr(av[i + 1]);
                my_put_nbr(result);
	}
	if (av[i + 1][0] == 48 && av[i][0] == '/') {
		my_putstr("Stop: division by zero\n");
		return (0);
	}
	if (av[i][0] == '*') {
                result = my_getnbr(av[i -1 ]) * my_getnbr(av[i + 1]);
                my_put_nbr(result);
	}
	if (av[i + 1][0] > 48 && av[i][0] == '%') {
		result = my_getnbr(av[i -1 ]) % my_getnbr(av[i + 1]);
		my_put_nbr(result);
	}
	if ((av[i + 1][0] == 48 && av[i][0] == '%')) {
 		my_putstr("Stop: modulo by zero\n");
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argc, argv);
	else
		write (2,"error",5);
	return (0);
}
