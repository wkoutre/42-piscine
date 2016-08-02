#include "review.h"

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int	*a;
	int b;

	b = 12;
	a = &b;
	ft_ft(a);
	ft_putnbr(b);
	ft_putchar('\n');
}