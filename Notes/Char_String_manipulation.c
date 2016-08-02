// 

int	main(void)
{
	char str1[] = "Hello";
}

// | 00 | 01 | 02 | 03 | 04 | 05 |
// | H  | e  | l  | l  | o  | \0 |

// FIRST EXAMPLE

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(void)
{
	char str1[] = "Hello";

	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}

// Compile this, and it will print out 'Hello'

// LET'S MANIPULATE

void ft_putchar( char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

void replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}



int	main(void)
{
	char str1[] = "Hello";
	char str2


	replace_first_h_with_y(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}

// This replaces the 'H' with 'y'

// Let's create function with two strings as parameters: a source and destination. We'll take a copy of the first
// character of the source and add it to the destination.

// 		| 00 | 01 | 02 | 03 | 04 | 05 |
// str1 | H  | e  | l  | l  | o  | \0 |

// 		| 00 | 01 | 02 | 03 | 04 | 05 |
// str2	| Y  | e  | l  | l  | o  | \0 |

void ft_putchar( char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

void replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}

void	replace_first_char(char *src, char *dest)
{
	dest[0] = src[0];
}


int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Yello"; // created this array
						  // removed the replace_with_y array char
	
	replace_first_char(str1, str2); // called the replace_first_char function with str1 as src and str2 as dest
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}