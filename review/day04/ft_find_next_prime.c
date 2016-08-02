#include "review.h"

/* THIS ISN'T FINISHED BC PRIME ISN'T FINISHED */

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

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (nb == 3 || nb == 5)
		return (nb);
	else if (nb == 4)
		return (5);
	else if (ft_is_prime(nb) == 1)
			return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

int		main()
{
	int		num;
	int		answer;
	
	printf("Enter a number to find the next prime number: \n\n");
	scanf("%d", &num);
	answer = (ft_find_next_prime(num));
	ft_putchar('\n');
	printf("%d is prime!\n", answer);
}
