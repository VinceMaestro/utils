#include "libft.h"

char    *ft_strstr(const char *big, const char *little)
{
  int i;

  i = 0;
  while (big[i] == little[i])
    i++;
  if (little[i] != '\0' && big[i] != '\0')
    return (ft_strstr(&big[i + 1], little));
  else if (little[i] == '\0')
    return (char*)(&(big[0]));
  else
    return (NULL);
}
