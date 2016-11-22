
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putnbr(int nbr)
{
	if ((nbr % 10) != nbr)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(48 + (nbr % 10));
	return (0);
}

int		main(void)
{
	ft_putnbr(304020006);
	return (0);
}
