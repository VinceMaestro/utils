
#include <stdio.h>
#include "libft.h"

int main()
{
	char src[] = "Hello world!";
	char dest[15];

	ft_strcpy(dest, src);

	printf("Copied string : %s\n", dest);
	printf("Copied char 0 : %c\n", dest[13]);

	return(0);
}
