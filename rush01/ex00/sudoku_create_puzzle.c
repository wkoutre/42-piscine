#include "sudoku.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_no_space(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	**create_puzzle(/*add argument here for argv input*/)
{
	int **puzzle;
	int i;
	int j;
	int array[9][9] = {
		0, 1, 9, 0, 0, 2, 0, 0, 0,
		4, 7, 0, 6, 9, 0, 0, 0, 1,
		0, 0, 0, 4, 0, 0, 0, 9, 0, 
		8, 9, 4, 5, 0, 7, 0, 0, 0,
		4, 7, 0, 6, 9, 0, 0, 0, 1,
		0, 0, 0, 2, 0, 1, 9, 5, 8, 
		0, 5, 0, 0, 0, 6, 0, 0, 0,
		6, 0, 0, 0, 2, 8, 0, 7, 9,
		0, 0, 0, 1, 0, 0, 8, 6, 0 };

	puzzle = (int**)malloc(sizeof(int*) * 9); // creating 9 arrays

	i = -1;
	while (++i < 9)
	{
		puzzle[i] = (int*)malloc(sizeof(int) * 9); //allocating memory for each of the arrays that we just declared
		j = -1;
		while (++j)
			puzzle[i][j] = array[i][j]; // copies everything from the array into the puzzle
	}
	return puzzle;
}

void	print_puzzle(int **puzzle)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 9)
	{
		i++;
		while (j < 9)
		{
			printf("%d\n", (puzzle[i][j]));
			ft_putchar('\n');
			j++;
		}
	}
}

int main()
{
	int **puzzle;

	puzzle = create_puzzle();

	print_puzzle(puzzle);

	return (0);
}