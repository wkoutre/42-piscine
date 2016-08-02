#include "review.h"

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = (*a / *b);
	*b = (temp % *b);
}

int			main(void)
{
	int		*p_y;
	int		*p_z;
	int		o;
	int		p;

	o = 25;
	p = 6;
	p_y = &o;
	p_z = &p;
	ft_ultimate_div_mod(p_y, p_z);
	ft_putnbr(*p_y);
	ft_putchar('\n');
	ft_putnbr(*p_z);
	ft_putchar('\n');
}