#include <stdio.h>
#include "libft.h"

int   main(void)
{
  char str[] = "Hello World!";

  printf("%s\n", ft_strrchr(str, 111));
  return (0);
}
