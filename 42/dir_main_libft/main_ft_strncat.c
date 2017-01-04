#include "libft.h"
#include <stdio.h>

int   main(void)
{
  char  s1[] = "Hello ";
  char  s2[] = "World!";
  int   len;

  len = 3;
  ft_strncat(s1, s2, len);
  printf("New s1 is : %s\n", s1);
  return (0);
}
