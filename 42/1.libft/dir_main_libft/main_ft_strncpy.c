
#include <stdio.h>
#include "libft.h"

int main()
{
	char src[] = "Hello world!";
	char dest[15];
	int sze;
	sze = 14;

	ft_strncpy(dest, src, sze);

	printf("Copied string : %s\n", dest);
	printf("Copied char 0 : %c\n", dest[13]);

	return(0);
}
