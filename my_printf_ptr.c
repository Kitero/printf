/*
** my_printf_ptr.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Thu Nov 17 10:27:56 2016 Theo CLEMENT
** Last update Sun Nov 20 12:08:59 2016 Theo CLEMENT
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int		my_printf(const char *str, ...)
{
  va_list	ap;
  char		*flags;
  int		i;
  int		j;

  va_start(ap, str);
  i = 0;
  j = 0;
  if (check(str))
    return (84);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i++;
	  i = space(str, i);
	  i = ptr_fonction_tab(str, ap, i);
	}
      else
	my_putchar(str[i]);
      i++;
    }
  va_end(ap);
}

int	ptr_fonction_tab(const char *str, va_list ap, int i, ...)
{
  int	(*tab[NB_PTR])(const char* str, va_list ap, int i, ...);

  tab[0] = &printf_s;
  tab[1] = &my_put_nbr;
  tab[2] = &printf_c;
  tab[3] = &printf_o;
  tab[4] = &printf_x;
  tab[5] = &printf_X;
  tab[6] = &printf_b;
  tab[7] = &printf_S;
  tab[8] = &printf_u;
  tab[9] = &printf_p;
  tab[10] = &printf_mod;
  tab[11] = &my_put_nbr;
  i = flag(tab, str, ap, i);
  return (i);
}

int	flag(int (*tab[NB_PTR])(const char* str, va_list ap, int i, ...),
	     const char *str, va_list ap, int i)
{
  int	j;
  char	*flags;

  flags = my_strdup("sdcoxXbSup%i");
  j = 0;
  if (attribute_char(str, i, ap) || attribute_char2(str, i, ap))
    i++;
  else
    {
      while (j < NB_PTR && flags[j] != str[i])
	j++;
      if (j != NB_PTR)
	tab[j](str, ap, i);
      else if (j == NB_PTR)
	{
	  my_putchar('%');
	  my_putchar(str[i]);
	}
    }
  return (i);
}
