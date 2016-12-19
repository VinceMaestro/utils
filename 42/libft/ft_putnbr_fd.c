#include <unistd.h>

int		ft_putnbr_fd(int nbr, int fd)
{
  int buff;

  if (nbr % 10 != nbr)
  {
    ft_putnbr_fd(nbr / 10, fd);
  }
  buff = 48 + (nbr % 10);
  write(fd, &buff, 1);
  return (0);
}
