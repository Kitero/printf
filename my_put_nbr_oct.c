/*
** my_put_nbr_oct.c for $ in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Thu Nov 10 16:01:24 2016 Theo CLEMENT
** Last update Sat Nov 19 16:30:33 2016 Theo CLEMENT
*/

#include <unistd.h>
#include "my.h"

int	my_put_nbr_oct(char  *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (0);
    }
  while (str[i])
    {
      if (str[i] > 31 && str[i] < 127)
	my_putchar(str[i]);
      else
	{
	  my_putstr("\\");
	  if (str[i] <= 7)
	    my_putstr("00");
	  else if (str[i] > 7)
	    my_putstr("0");
	  my_put_nbr_base((str[i]), 8, 0);
	}
      i++;
    }
  return (0);
}

int	my_put_nbr_bin(unsigned int nb)
{
  unsigned int	i;
  char	j;

  i = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while ((nb / i) >= 2)
    i = i * 2;
  while (i >= 1)
    {
      j = nb / i;
      nb = nb % i;
      i = i / 2;
      my_putchar(j + 48);
    }
  return (0);
}

int     dispmin_p(char j)
{
  if (j < 10)
    my_putchar(j + '0');
  else if (j >= 10)
    my_putchar(j - 10 + 'a');
}

int     my_put_nbr_p(unsigned long int nb)
{
  unsigned long int     i;
  unsigned long int     j;
  int base;

  base = 16;
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
      dispmin_p(j);
    }
  return (0);
}
