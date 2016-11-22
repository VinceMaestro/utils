int		*ft(void)
{
	int	tab[3];

	tab[1] = 1;
	tab[2] = 2;

	return (tab);
}

int		main(void)
{
	return (ft()[3]);
}
