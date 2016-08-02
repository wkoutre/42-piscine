#include "review.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
	ft_putchar('\n');

}

int		main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
