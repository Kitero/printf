/*
** attribute_char.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Wed Nov 16 16:18:46 2016 Theo CLEMENT
** Last update Sun Nov 20 12:03:25 2016 Theo CLEMENT
*/

#include <stdarg.h>
#include "my.h"

int     attribute_char(const char *str, int i, va_list ap, ...)
{
  if (str[i] == '#')
    {
      if (str[i + 1] == 'o')
	{
	  my_putchar('0');
	  my_put_nbr_base(va_arg(ap, unsigned int), 8, 0);
	}
      else if (str[i + 1] == 'x')
	{
	  my_putstr("0x");
	  my_put_nbr_base(va_arg(ap, unsigned int), 16, 1);
	}
      else if (str[i + 1] == 'X')
	{
	  my_putstr("0X");
	  my_put_nbr_base(va_arg(ap, unsigned int), 16, 2);
	}
      else
	return (0);
      return (1);
    }
  return (0);
}

int	attribute_char2(const char *str, int i, va_list ap, ...)
{
  int	nbr;

  if (str[i] == '+')
    {
      if (str[i + 1] == 'd' || str[i + 1] == 'i')
	{
	  nbr = va_arg(ap, unsigned int);
	  if (nbr < 0)
	    my_put_nbr_normal(nbr);
	  else
	    {
	      my_putchar('+');
	      my_put_nbr_normal(nbr);
	    }
	}
      else if (str[i + 1] == 'p')
	{
	  my_putstr("+0x");
	  my_put_nbr_p(va_arg(ap, unsigned long int));
	}
      else
	return (0);
      return (1);
    }
  return (0);
}
