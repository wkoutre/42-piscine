#include "review.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(void)
{
	int	i;

	i = 149;

	ft_putnbr(i);
	ft_putchar('\n');
}
