POINTERS TO FUNCTIONS

int x;
int *y;

x = 42;
y = &x;

*y = 0;			// so now x = 0; keep this shit in MIND

----------

void	f(char c);			// function returns nothing, it takes a character, c, as a parameters

void	(*funptr)(char);	// we don't need to specify a name for the function's parameter

// ***** MORE COMPLETE EXAMPLE ******	

#include <unistd.h> 		// for write

void	ft_putchar(char c)
{
	write(1, &c, 1)
	return;
}

int	main()
{
	void	(*f)(char);

	f = &ft_putchar;		// now we can just call ft_putchar with f('character') !!!
	f('z');
	return (0);
}

// ***** TYPEDEF EXAMPLE *****

#include <unistd.h> 

typedef	void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1)
	return;
}

int	main()
{
	funptr	f;			// creates a typedef (shortcut) that will create a pointer to a function

	f = &ft_putchar;		
	f('z');
	return (0);
}

// ***** MORE IN DEPTH EXAMPLE ***** (PSEUDO CODE)

