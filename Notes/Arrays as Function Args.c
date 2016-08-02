STACK = one contiguous block of memory
Functions are run above MAIN on the STACK; the variables in the functions have DIFFERENT SCOPES
Incrementing a pointer by 1 unit increments the address by the sie of the variable type pointer to.


// ARRAYS AS FUNCTION ARGUMENTS

#include <stdio.h>
int SumOfElements(int A[], size)				// same as SumOfElements (int *A); there
{
	int i, sum = 0;
	int = sizeof(A)/sizeof(A[0]);				// size here is only 1 (4/4 = 1)
	for(i = 0; i< size, i++;)
	{
		sum+= A[i];								// A[i] = *(A + i)
	}
return sum;
}

int	main()
{
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = SumOfElements(A, size);			// this does 20/4 = 5 (5 ints * 4 bytes = 20)
	printf("Sum of elements = %d\n", total);
}

// When the compiler sees the array as a function argument, it doesn't copy the entire array being passed.
// It creates a POINTER to the array being passed, and thus only passes the address of the first element...

// so "int A[]" is converted into "int *A"
// This is called a CALL BY REFERENCE -- arrays are always called by reference (not value) to save memory

STRINGS

// strings are just character arrays
// working with strings efficiently requires:

// 1. Char array needs to be large enough, aka size >= (# chars in string + 1)
													"John" = 4 + 1 for '0'

int main()							// Three ways of writing 'Nick'
{
	char c[20];
	C[0] = 'N';
	C[1] = 'I';
	C[2] = 'C';
	C[3] = 'K';
	C[4] = '\0';
	int len = strlen(C);			// returns 4
	char C[5] = {'N', 'I', 'C', 'K', '\0'};

	// or char C[] = "Nick"			// String literal notation; the \0 will be added auomatically

	printf("%s\n", C);				// prints 'Nick'
}

// 2. We can travers arrays with pointers to the array

char c1[6] = "Hello";

char *c2;

c2 = c1;							// this is valid bc using the name of the array returns the address
									// of the first element in the array; now we can use c2 (a char pointer)
									// to read and write from the array.

printf("%c\n", c2[1]);				// prints "e"
c2[0] = 'A';						// changes string to "Aello"

c2[i] = *(c2 + i);					// we CANNOT say c1 = c1 + 1... BUT we can do it w/ the pointer
									// c2++; this traverses the array, since it's the pointer to c1;


// 3. Printing with out own print function

void	print(char *C)
{
	int i = 0;

	while (c[i] != '\0')				// or *(C+i) OR while(*c); printf("%c", *c), c++
		{
			printf("%c", c[i]);
			i++
		}
	printf("\n");
}



char c[20] = "Hello";
	print(c)

STRING FUNCTIONS AND COSTANT pointers

void	print(const char *C)	// the const makes the array read-only
{

	while (*C != '\0')
		{
			printf("%c", *C);
			C++;
		}
	printf("\n");
}

int main()
{
// char c[20] = "Hello";		// string gets stored in the space for array
	char *D = "Hello";			// string get stored as COMPILE TIME CONSTANT
	D[0] = 'A';					// THIS WON'T WORK!!! PROGRAM WILL CRASH

