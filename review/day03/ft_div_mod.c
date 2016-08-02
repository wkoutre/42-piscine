#include "review.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int		main(void)
{
	int w;
	int x, q, u;
	int *divv;
	int *modd;

	w = 10;
	x = 6;
	q = 1;
	u = 1;
	
	divv = &q;
	modd = &u;
	ft_div_mod(w, x, divv, modd);		
	ft_putnbr(*divv);
	ft_putchar('\n');
	ft_putnbr(*modd);
	ft_putchar('\n');
	ft_putnbr(u);
	ft_putchar('\n');
}
