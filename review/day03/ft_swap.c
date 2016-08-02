#include "review.h"

void		ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int		*y;
	int		*z;
	int 	w;
	int		x;

	w = 15;
	x = 20;
	y = &w;
	z = &x;
	ft_swap(y, z);
	ft_putnbr(w);
	ft_putchar('\n');
	ft_putnbr(x);
	ft_putchar('\n');
}
