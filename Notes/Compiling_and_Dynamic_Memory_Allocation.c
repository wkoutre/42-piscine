			// FIRST STAGE - Compiling the files.c in computer language


// files.c to files.o

			// SECOND STAGE - Linkage: using files.o to create an executable


FIRST STAGE
// gcc -c ft_putchar.c 			>>		gives us ft_putchar.o
// same thing with other files.c

// Now, let's link

SECOND STAGE
// gcc main.o ft_putchar.o ft_putstr.o <executable's name>

// WHY DO WE DO THIS?

// Larger projects with many files and functions... we can have power over only
// adding files we've actually modified, instead of recompiling EVERYTHING


			// DYNAMIC MEMORY ALLOCATION

// touch malloc.c

// We're loking to define, as a pointer, a variable whose size hasn't been
// defined yet

//

#include <stdlib.h> 		// malloc's library
#define LEN		42			// defining LEN to 42 bytes

int	main()
{
	char	*str;
	
	str = (char*)malloc(sizeof(*str) * (LEN + 1)); //sizeof gives us variable's size in bytes
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}

// We want a string made of 42 characters, so we have to take care of the
// size we pass to malloc. MUST THINK ABOUT THE '\0' !!!


// we can just take the size of *str, so we can change str's type at the top
// instead of everywhere in the function

#include <stdlib.h> 		// malloc's library
#define LEN		42

int	main()
{
	int	*str;
	
	str = (char*)malloc(sizeof(*str) * (LEN + 1)); //sizeof gives us variable's size in bytes
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}

// malloc's man specifies that malloc's prototype returns a 'void *'
// which is an address without a type. str HAS a type, SO we have to cast it
// to give the type 'char *' to what malloc returns

gcc malloc.c ft_putstr.c

// Voila! our string is displayed

// 0123456789012345678901234567890123456789012345678901 // == 42 bytes

// If we change our size to 21, we'll get:

// 012345678901234567890 // and the allocation works fine

// We're temporarily taking memory, then freeing it.
// If LEN = 42 million bytes (~40 MB of memory)... we won't print it out
// but we'll use 'top' to see the currect processes

// In malloc's man, we can see the command 'free' which takes malloc's 'void *'
// and doesn't return anything.

// Same define, so... before our second while loop, we'll call 'free(str)' :

#include <stdlib.h> 		// malloc's library
#define LEN		42

int	main()
{
	int	*str;
	
	str = (char*)malloc(sizeof(*str) * (LEN + 1)); //sizeof gives us variable's size in bytes
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	while (1)
		;
	ft_putstr(str);
	return (0);
}

// compile as 'a.out2'

// if we compare in top, a.out2 only has 132K of memory because the memory
// has been freed after it's been run!

// We can perform memory allocations for things that don't have a size at
// first, and to which we can't set a size in the program
// (strings, arrays, and chained lists)