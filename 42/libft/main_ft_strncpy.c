
#include <stdio.h>
#include "libft.h"

int main()
{
	char src[] = "Hello world!";
	char dest[6];
	size_t sze = 5;

	char *dst = ft_strncpy(dest, src, sze);

	printf("Final copied string : %s\n", dst);

	return(0);
}
