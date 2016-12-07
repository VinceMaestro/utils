
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[] = "Hello World!";
	char	s2[] = "Hello World!";

	if (ft_strcmp(s1, s2) == 1)
	{
		printf("s1 supperieur s2");
	}
	else if (ft_strcmp(s1, s2) == -1)
	{
		printf("s1 inferieur s2");
	}
	else
	{
		printf("s1 egual s2");
	}
	return (0);
}
