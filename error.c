/*
** error.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Wed Nov 16 18:07:34 2016 Theo CLEMENT
** Last update Fri Nov 18 09:07:43 2016 Theo CLEMENT
*/

#include <stdlib.h>
#include <unistd.h>

int     check(const char *str)
{
  if (str == NULL)
    {
      write(2, "(null)\n", 7);
      return (84);
    }
  return (0);
}
