#include "review.h"

/* THIS ISN'T FINISHED... another day */

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

int		ft_is_prime(int nb)
{
	int i;
	int copy;

	i = 0;
	copy = nb;
	if (nb <= 0 || nb == 1 || nb == 4)
		return (0);
	else if (nb <= 5)
		return (1);
	else if (ft_sqrt(nb) != 0)
			return (0);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0
			 || nb % 7 == 0 || nb % 11 == 0 || nb % 13 == 0
			|| nb % 17 == 0 || nb % 19 == 0 || nb % 23 == 0
			|| nb % 29 == 0)
		return (0);
	else
		return (1);
}

int		main()
{
	int		num;
	int		answer;
	
	printf("Enter a number to find if it's prime: \n\n");
	scanf("%d", &num);
	answer = (ft_is_prime(num));
	ft_putchar('\n');
	if (answer)
		printf("%d is prime!\n", num);
	else
		printf("%d is NOT prime.\n", num);
	ft_putchar('\n');
}
