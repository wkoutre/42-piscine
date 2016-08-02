// Libraries are just built in functions to reference in code to save time, etc.
// How do we retrieve a program's arguments? Using mains to take arguments.

// The program will be conditional and won't have to be recompiled every. single. time....

// HOW TO CREATE A LIBRARY

gcc -c <function1>		// This creates a <function.o> file
gcc -c <function2>
gcc -c <main.c>

gcc function1.o function2.o main.o	// This creates a binary

ar rc <library_name, aka libstr.a> <file1_to_add.o> <file2_to_add.o>

gcc main.c -L. -lstr 					// Look for the library in this directory, 
									// and look for lstr (libstr.a)

									// Now we can move our <libstr.a> ANYWHERE

ranlib	// Takes library as a parameter and creates an index in the library

aka ranlib <libstr.a>	// It'll set certain functions at different positions and optimizes
						// compilation time in the future. ADOPT THIS METHOD ASAP


// MAIN ARGUMENTS

// our main code can take two arguments:

// int argc -- represents the number of parameters that can be passed to the program
// char **argv -- string array containing the parameters of int argc

// inverted commas group multiple arguments in the same string

// argc is always at LEAST equal to 1
// argv[0] is always filled, then we can pass arguments to argv[1]

// argc lets us know how many arguments we have, and we can also display all parameters passed
// to the program by scanning the array

// this can also tell us whether or not the program needs an argument. In turn, we can inform
// the user on how to use the program properly

// Lots of opportunity to make the program more use friendly.

// ADVICE: 	Be careful, bear in mind that we cannot guess everything that the user might pass
// 			to the program

// EXAMPLE

int main()
{
	ft_putstr("Hello");
	return (0);
}

// This will always display the same thing... "Hello" or whatever is told to be returned

int main(int argc, char **argv)
{
	/* code */
	ft_putstr("Hello");
	ft_putstr(argv[0]);		// displaying the first parameter
	ft_putchar('\n');
	return (0);
}

// After compiling as <a.out>, this returns: "Hello, ./a.out"

// Since the binary's name, <a.out>, is the first element in our string's array

// If we launch the binary from somewhere else, the entire path would be displayed. Binary's name
// is in argv's first box (the first element)

// We need to first set an argument before accessing argv[1] bc we cannot read into an empty array

// So if we type: ./a.out "Hello world"  >>> this outputs: .a.out Hello world

// Binaries such as "ls -l" take options and pass data into <argv[indexes]>

// If, in the main, we have:

int main(int argc, char **argv)
{
	ft_putstr("Hello");
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');	
	return (0);
}

// We avoid a segmentation fault bc we're testing whether or not there's an argument present.
// If there's an argument, we allow it to be displayed.

// argc lets us know how many arguments we have, and we can also display all parameters passed
// to the program by scanning the array

int main(int argc, char **argv)
{
	ft_putstr("Hello");
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("usage: ./aout toto\n");	// This tells the user the program takes "toto" as an argument
		return (0);
	}
	ft_putchar('\n');	
	return (0);
}