#include "review.h"

int					ft_atoi(char *str)
{
	unsigned int 	i;
	int				negative;
	int				result;

	result = 0;
	i = 0;
	negative = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n' 
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				negative = 1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (negative == 1)
		result = -result;
	return (result);
}

int			main(void)
{
	char	*str;

	ft_putstr("This should return 897: \n\n");
	str = "		\n \t \f \v \r      897";
	ft_putnbr(ft_atoi(str));
	ft_putchar('\n');
	ft_putchar('\n');
}