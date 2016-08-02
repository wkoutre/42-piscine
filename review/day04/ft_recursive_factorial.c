#include "review.h"

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	else
		return	nb *= ft_recursive_factorial(nb - 1);
}

int		main(void)
{
	int i;

	i = 5;
	ft_putnbr(ft_recursive_factorial(12));
	ft_putchar('\n');
}
