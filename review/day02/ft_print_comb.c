#include "review.h"

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;

	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb();
}
