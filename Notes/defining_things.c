#define <THIS> with_this_anything

#define THIS(x)	int x;			>> 			THIS(a) == int a;

#define THIS(x) #x 				>> 			char	*str;				>> # replaces value of what is in THIS()
																		with the value of what is inside THIS's brackets
											
											str = THIS(a);
											wrote(1, str, 1);

											displays... a


#ifdef TOTO (if there exists a define of TOTO, we'll do things...)

int	main(void)
{
	return (0);
}

#endif						if TOTO is defined, the file will get an int	main() that returns 0;

#ifndef TOTO		>> this means, if TOTO is NOT defined, do what's between that and the #endif

#ifndef TOTO
# ifndef TITI

int	main(voice)
{
	return (0);
}

#endif
#endif

#define TOTO (without setting it equal to anything), is FINE for the computer


there's also #elif but... it's better fto do blocks with #ifdef and #ifndef

NESTED INCLUSIONS OF .H FILES

file1.h = #include "file1.h"
file2.h = #include "file2.h"

This loops forever... SO

#ifndef	__FT_TEST1_H__		>> this means if the first macro hasn't been defined, then include "test2.h"
#include "test2.h"				otherwise, stop defining it.w
#endif

#ifndef	__FT_TEST1_H__
#define __FT_TEST1_H__
#endif

let us compile main.c (which includes test1.h)

test1.h includes test2.h, test2.h tries to include test1.h, but it's empty, so test2.h is included'

EXAMPLE

test1.h:

#ifndef __FT_TEST1_H__
# DEFINE __FT_TEST1_H__

#include "test2.h"

void	pouet1(void);

#endif

test2.h:

#include "test1.h"
void	pouet2(void);

TYPEDEF - allows us to redefine a type, and create a new type

typedef int peanut;			>> since peanut is not a preprocessor word, it's executable, so we need to semi-colon'

int	main(void)
{
	peanut	a;

	a = 10;
	return (0);
}

the REAL difference occurs during compilation. ..ALL about the SCOPE of the typedef

Wherever we put our typedef, THAT'S the area that will be affected. SEE HERE:'

void	ft_fct(void
{
	peanut a;						// THIS (to the left) WON'T COMPILE because
										peanut has been declared in the main, beneath
	a = 10;								the ft_fct funtion
}

int	main(void)						// if we added the typedef out of the scope AT THE TOP.
{										the standard wouldn't be respected, but the file would compile'
	peanut	a;	

	a = 10;
	return (0);
}

NOW we have:

typedef int*	int_p;

int	main()
{
	int* a, b, c;			// the asterisk is in the wrong place, so we need to change it to *a, to make
	return (0);					only a be a pointer to an int
}

typedef int*	int_p;
#define INTP 	int*

int	main()
{
	INTP a, b, c;			// the asterisk would be on the right, before a (so a would be *a)
	return (0);				// BUT!!!
}

typedef int*	int_p;
#define INTP 	int*

int	main()
{
	int_p a, b, c;			// a, b, and c would ALL be pointers to int
	return (0);				// The whole purpose of this is to be able to modify data types ONLY in one place
}							

DATA STRUCTURES

struct - allows us to create groups of data that will all be linked together

IMAGINE we want to do geometric calculations on points

We have 10 points in a 2D area:

int main(void)
{
	int x[10];
	int y[10];
	float			

	return (0);
}

could've also done...

int main(void)
{
	int point[20];			// evens are x, odds are y. to access a value, we'd access it and then multiple it by 2..
}							// quite hectic!

SO - struct:

struct s_point
{
	int x;
	int y;
}; 							// END WITH THE SEMI-COLON

int main()
{
	struct s_point	a;		// keyword, point, name
	a.x = 10;
	a.y = 42;
	b = a;					// now b's x = 10, b's y = 42; we can modify a without worrying about affecting b.		
}

typedef struct 		s_point
{
	int x;
	int y;
}					t_point;	//writing t_point a >> writes "struct s_point 	a;"


(*ptr).x = 10;		*ptr is the same as 'a'
OR
ptr->x = 10;		This is dereferencing the pointer; we're looking for a structure's element, because 
					the element towards which pointed the pointer is an element


ENUM - another new keyword

enums allow us to set words instead of having numbers; kind of like ints, but we use them to make lists
Below, we can now create structures with type e_list

enum 	e_list
{
	val1,
	val2,
	val3,
};

int main()
{
	enum e_list a;

	a = val1;				// Now val1 is worth 0, val2 is worth 1, an val3 is worth 2
							// if val1 = 4, then val2 = 5, val3 = 6 (IF we don't explicitly definer the vals)
}							// we generally shouldn't be able oto set the same enum twice

All the enums are now able to be written without writing "e_list"

DATA STRUCTURES - UNION

Unions allow us to access the memory areas in several different ways:

include "tools."

struct 		s_test				// structures add elements one after another
{
	int 	i;
	char	c;
	float	f;
	char	tab[4];
};

union 	u_test					// we can access the same memory areas in many different ways
{
	int 	i;
	char	c;
	float	f;
	char	tab[4];
};

int main(void)
{
	ft_putnbr910);
	return (0);
}

EXAMPLE:

ft_putnbr(sizeof(struct s_test));		// RETURNS 16 bytes
										// if we count up the struct, it's 13 bytes. but the compiler pads them, in increments of 4 (32-bit processor);
										// the size of the struct is the sum of all the elements and their padding (each one gets padded to the nearest 4th byte)

ft_putnbr(sizeof(union u_test));			// this will give us a size of 4, because it takes the size of the largest element, 												padded to the nearest 4 byte


int main(void)
{
	union u_test	a;					// the value of a.i is displayed as 424242

	a.i = 424242;
	ft_putnbr(sizeof(union u_test));
	return (0);
}

int main(void)
{
	union u_test	a;					

	a.i = 424242;
	ft_putnbr(a.tab[0]);
	ft_putchar('\n');
	ft_putnbr(a.tab[1]);
	ft_putchar('\n');				// we get 50, 121, 6, 0 -- these are the 4 bytes that our int is made of
	ft_putnbr(a.tab[2]);			// 50 * 256^0; 121*256^1; 6* 256^2; 0* 256^3
	ft_putchar('\n');				// 50 + 121 * 256 + (6*256*256) = 424242 = a.i!
	ft_putnbr(a.tab[3]);
	ft_putchar('\n');
	return (0);
}

