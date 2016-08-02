#include "review.h"

void	ft_is_negative(int n)
{
	if (n * (-1) > 0)
		ft_putchar('N');
	else
		ft_putchar('P');
	ft_putchar('\n');
}

int		main(void)
{
	ft_is_negative(0);
}