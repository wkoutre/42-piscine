POINTERS AND MULTI-DIMENSIONAL ARRAYS

int A[5] = {2, 4, 6, 8, 10};

int	*p = A;

print a;			// 200
print *p;			// 2
print (p + 2)		// 208
print *(p + 2)		// 6

					// (A + i) = &A[i]
					// *(A + i) = A[i]

Now with 2-D arrays...

int	B[2][3]						// creating two 1-D arrays


		 		 400 404 408 412 416 420		// addresses
int B[2][3] = 	| 2 | 3 | 6 | 4 | 5 | 8 |


B[0]
B[1]

int	*p = B;						// gives us compilation error, bc B returns a pointer to 1-D array of 3 ints

// so we need to do...

int *p[3] = B;					// This works!!

Print B or &B[0]				// 400 (its pseudo-address)
Print *B or B[0] or &B[0][0]

print (B + 1) 					// 412, because 1 * 3ints * 4 bytes = 12

print *(B + 1) or B[1]			// or &B[1][0]	= 412

