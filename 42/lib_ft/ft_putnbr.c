
int		ft_putchar(char c);

int		ft_putnbr(int nbr)
{
	if (nbr % 10 != nbr)
	{
		ft_putnbr(nbr / 10);
	}
	ft_purchar(48 + (nbr % 10));
	return (0);
}
