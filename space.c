/*
** space.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Wed Nov 16 16:33:30 2016 Theo CLEMENT
** Last update Fri Nov 18 09:07:13 2016 Theo CLEMENT
*/

#include "my.h"

int	space(const char *str, int i)
{
while (str[i] == ' ')
  {
    if (str[i + 1] != ' ')
      my_putchar(' ');
    i++;
  }
return (i);
}
