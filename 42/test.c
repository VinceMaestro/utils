#include <stdio.h>
#include "libft.h"

int	 main(void)
{
	//printf("real is : %i\n", strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	printf("your's is : %i\n", strcmp(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"), "AAA \t BBB"));
	return (0);
}
