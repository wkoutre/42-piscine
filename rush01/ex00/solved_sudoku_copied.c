#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int isAvailable(int puzzle[][9], int row, int col, int num)
{
    int rowStart = (row / 3) * 3;
    int colStart = (col / 3) * 3;
    int i, j;

    i = -1;
    while (++i < 9)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[rowStart + (i % 3)][colStart + (i / 3)] == num) return 0;
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col)
{
    int i;
    if(row < 9 && col < 9)
    {
        if(puzzle[row][col] != '.')
        {
            if ((col + 1) < 9) return fillSudoku(puzzle, row, col + 1);
            else if ((row + 1) < 9) return fillSudoku(puzzle, row + 1, 0);
            else return 1;
        }
        else
        {
            for(i = 0; i < 9; ++i)
            {
                if(isAvailable(puzzle, row, col, i + 1))
                {
                    puzzle[row][col] = i + 1;
                    if((col + 1) < 9)
                    {
                        if(fillSudoku(puzzle, row, col + 1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row + 1) < 9)
                    {
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int main(argc, **argv)
{
    int i;
    int j;

    i = 0;
    if (argc == 10)
        while (argv[i])
    int puzzle[9][9]={{0, 0, 0, 0, 0, 0, 0, 9, 0},
                      {1, 9, 0, 4, 7, 0, 6, 0, 8},
                      {0, 5, 2, 8, 1, 9, 4, 0, 7},
                      {2, 0, 0, 0, 4, 8, 0, 0, 0},
                      {0, 0, 9, 0, 0, 0, 5, 0, 0},
                      {0, 0, 0, 7, 5, 0, 0, 0, 9},
                      {9, 0, 7, 3, 6, 4, 1, 8, 0},
                      {5, 0, 6, 0, 8, 1, 0, 7, 4},
                      {0, 8, 0, 0, 0, 0, 0, 0, 0}};
        }
    }
    else printf("\n\nError\n\n");

    return 0;
}