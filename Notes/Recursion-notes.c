int fn()
{
	fn();
	return (0);
}

int main()
{
	fn();
	return (0);
}

// THIS WON'T COMPILE... RETURNS "segmentation fault" ... there is no stopping point

// SO, let's try again.

//TAKE 2

int fn()
{
	int i;
	i = 0;

	if (i <= 5)
	{
		i+=;
		fn();
	}
	else
	{
		return (0);
	}
}

int main()
{
	fn();
	return (0);
}

// this still doesn't work! ridiculous... except... i keeps getting set to 0
// everytime the IF statement is run

// we'll have to pass values that return parameters... so we'll need to use that.



//TAKE 3

#include <unistd.h>

int fn(int i)
{
	if(<= 5)
	{
		i+=;
		write(1, "D", 1);
		fn(i);
		return(0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	fn();
	return (0);
}

// THIS DISPLAYS D 6 TIMES (0-5) and proves the function was called correctly

// TAKE 4

#include <unistd.h>

int fn(int i)
{
	if(<= 5)
	{
		i+=;
		write(1, "D", 1);
		fn(i);
		write(1, "F", 1);
		return(0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	fn();
	return (0);
}

// This displays DDDDDDFFFFFF%