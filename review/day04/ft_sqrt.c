#include "review.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if (nb % i == 0)
		return (i);
	else
		return (0);
}

int		main()
{
	int		num;
	int		answer;
	
	printf("Enter a number to find sqrt: \n\n");
	scanf("%d", &num);
	answer = (ft_sqrt(num));
	ft_putchar('\n');
	if (answer)
		printf("The square root of %d is %d.\n", num, answer);
	else
		printf("There is no square root of %d.\n", num);
	ft_putchar('\n');
}
