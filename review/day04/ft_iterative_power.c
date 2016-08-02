#include "review.h"

int		ft_iterative_power(int nb, int power)
{
	int	negative;
	int	copy;
	
	copy = nb;
	negative = 0;
	if (nb > 0 && nb > 1 && power % 2 != 0)
		negative = 1;
	if (power == 0)
		return (1);
	else
		while (power > 1)
		{
			nb *= copy;
			power--;
		}
	if (negative == 1)
		return (-nb);
	return (nb);
}

int		main()
{
	int	i;

	i = 10022100;
	ft_putnbr(ft_iterative_power(i, 5));
	ft_putchar('\n');
}