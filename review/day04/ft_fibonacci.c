#include "review.h"

int		ft_fibonacci(int index)
{
	if (index < 1)
		return 0;
	if (index == 1)
		return (0);
	if (index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}

int		main()
{
	ft_putnbr(ft_fibonacci(8));
	ft_putchar('\n');
}
