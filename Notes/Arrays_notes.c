int	main()
{
	int tab[10];

	tab[0] = 42;
	*(tab + 0); //is also equal to 42

	//last element is at:
	*(tab + 9);

}

void void()
{
	int tab[10];
	int *ptr;

	ptr = tab;
	*(ptr + 3) = 867
	ft_putnbr(tab[3]); // also equals 876
}


void void()
{
	int tab[10];
	int tab2[10];
	int *tabptr[2];

	// we want to modify tab2 from tabptr
	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr[1][3] = 42; //below is reqritten with pointers

	*(tabptr[1] + 3) = 42 // SAME
	*(*(tabptr + 1) + 3) = 42; // SAME	
	
	ft_putnbr(tab2[3]); // modifies tab2[3] has been set to 42!
	ft_putnbr(tab[3]); // also equals 876
}