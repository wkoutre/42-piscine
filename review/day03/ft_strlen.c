#include "review.h"

int			ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			main(void)
{
	char	*name;

	name = "Nicholas ";
	ft_putstr(name);
	ft_putstr("has ");
	ft_putnbr(ft_strlen(name));
	ft_putchar(' ');
	ft_putstr("characters.");
	ft_putchar('\n');
}
