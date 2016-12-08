#include <stdio.h>
#include "libft.h"

int   main(void)
{
  const char big[] = "Hello World and World welcome !";
  const char little[] = "World";

  // ft_strstr(big, little);
  printf("%s\n", ft_strstr(big, little));
}
