#include "review.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}

int			main(void)
{
	char	*name;

	name = "Nicholas";
	ft_putstr(name);
	ft_putchar('\n');
}
