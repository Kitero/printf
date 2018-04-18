/*
** my_putstr.c for my_putstr in /home/Kitero/Prog Projects
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Thu Oct  6 16:06:00 2016 Theo CLEMENT
** Last update Fri Nov 18 11:47:22 2016 Theo CLEMENT
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (0);
    }
  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      i = i + 1;
    }
}
