#include "libft.h"
#include <stdio.h>

int   main(void)
{
  char  s1[] = "Hello ";
  char  s2[] = "World!";

  ft_strcat(s1, s2);
  printf("New s1 is : %s\n", s1);
  return (0);
}
