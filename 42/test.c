#include <stdio.h>
#include "libft.h"

int	 main(void)
{
	printf("%i\n", atoi("  \t\n  \r\r\v\f-899"));
	printf("%i\n", ft_atoi("  \t\n  \r\r\v\f-899"));
	return (0);
}
