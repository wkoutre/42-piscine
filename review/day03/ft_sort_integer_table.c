#include "review.h"

void		ft_sort_integer_table(int *tab, int size)
{
	int		temp;
	int 	i;

	i = 0;
	temp = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int 		main()
{
	int		num[15] = {10, 4, 6, 2, 8, 5, 2, 0, 4, 6, 3, 4, 4, 1, 7};
	int 	i;

	i = 0;
	ft_sort_integer_table(num, 15);
	while (i < 15)
	{
		ft_putnbr(num[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
