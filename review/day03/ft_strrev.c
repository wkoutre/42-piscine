#include "review.h"

/* THIS RETURNS A BUS ERROR */

char		*ft_strrev(char *str)
{
	int 	i;
	int 	k;
	char	temp;

	k = 0;
	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while(i > k)
	{
		temp = str[k];
		str[k] = str[i];
		str[i] = temp;
		i--;
		k++;
	}
	while(str[k])
		k++;
	str[k] = '\0';
	return (str);
}

int			main(void)
{
	char		*name;
	
	name = "Nick";
	ft_strrev(name);
	ft_putstr(name);
	ft_putchar('\n');
}
