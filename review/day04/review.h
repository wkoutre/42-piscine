#ifndef REVIEW_H
# define REVIEW_H

# include <unistd.h>
# include <stdio.h>
# include <xlocale.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer(int *str);
int		ft_sqrt(int nb);
int		ft_recursive_factorial(int nb);
int		ft_recursive_power(int nb, int power);
int 	ft_is_prime(int nb);

#endif