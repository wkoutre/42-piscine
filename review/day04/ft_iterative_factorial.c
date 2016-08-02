#include "review.h"

int		ft_iterative_factorial(int nb)
{
	int copy;

	copy = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (copy > 1)
		{
			nb *= (copy - 1);
			copy--;
		}
	}
	return (nb);
}

int		main(void)
{
	int i;

	i = 5;
	ft_putnbr(ft_iterative_factorial(4));
	ft_putchar('\n');
}
