/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include "my.h"

int	my_put_nbr(const char *str, va_list ap, int k, ...)
{
  int	i;
  char	j;
  int	nb;

  nb = va_arg(ap, int);
  i = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while ((nb / i) >= 10)
    i = i * 10;
  while (i >= 1)
    {
      j = nb / i + 48;
      nb = nb % i;
      i = i / 10;
      my_putchar(j);
    }
  return (0);
}

int	dispmin(char j)
{
  if (j < 10)
    my_putchar(j + '0');
  else if (j >= 10)
    my_putchar(j - 10 + 'a');
}

int	dispmax(char j)
{
  if (j < 10)
    my_putchar(j + '0');
  else if (j >= 10)
    my_putchar(j - 10 + 'A');
}

int	my_put_nbr_base(unsigned int nb, int base, int size)
{
  int	i;
  int	j;

  i = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while ((nb / i) >= base)
    i = i * base;
  while (i >= 1)
    {
      j = nb / i;
      nb = nb % i;
      i = i / base;
      if (size == 1)
	dispmin(j);
      else if (size == 2)
	dispmax(j);
      else
	my_putchar(j + 48);
    }
  return (0);
}

int	my_put_nbr_u(unsigned int nbr)
{
  int	i;
  char	j;

  i = 1;
  while ((nbr / i) >= 10)
    i = i * 10;
  while (i >= 1)
    {
      j = nbr / i + 48;
      nbr = nbr % i;
      i = i / 10;
      my_putchar(j);
    }
  return (0);
}

