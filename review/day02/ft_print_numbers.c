#include "review.h"

void	ft_print_numbers(void)
{
	int	a;

	a = '0';
	while (++a <= '9')
		ft_putchar(a);
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_numbers();
}