#include <string.h>

int	main(void)
{
	int	ret;
	char	*s1 = "hello";
	char	*s2 = "hella";

	ret = strcmp(s2, s1);
	return (ret);
}
