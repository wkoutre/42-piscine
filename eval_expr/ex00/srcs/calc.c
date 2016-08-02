#include "ft.h"

void	count_num_op(char *str, int count[])
{
	int	i;
	int	z;

	i = 0;
	count[0] = 9;
	count[1] = 0;
	z = 1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || 
			str[i] == '/' || str[i] == '%' )
		{
			count[1]++;
			z = 1;
		}
		if (str[i] == ' ')
			z = 1;
		if (str[i] >= '0' && str[i] <= '9' && z)
		{
			count[0]++;
			z = 0;
		}
		i++;
	}
}

int		*find_nb(char *str, int count[])
{
	int	nbr;
	int	i;
	int	current;
	int	*ar_nbr;

	count_num_op(str, count);
	ar_nbr = (int *)malloc(sizeof(*ar_nbr) * count[0]);
	i = 0;
	current = 0;
	while (str[i])
		if str[i] >= '0' && str[i]
}

int		calc(int a, int b, int c)
{
	if (c == find_op('+')
		return (a + b);
	if (c == find_op('-')
		return (a - b);
	if (c == find_op('/')
		return (a / b);
	if (c == find_op('*')
		return (a * b);
	if (c == find_op('%')
		return (a % b);
	
}

int		rank_op(int o)
{
	if (o == find_op('+') || o == find_op('-'))
		return (1);
	if (o == find_op('*') || o == find_op('/')
			|| o == find_op('%'))
		return (2);
	return (0);
}