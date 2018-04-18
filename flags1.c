/*
** flags1.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Thu Nov 17 10:36:15 2016 Theo CLEMENT
** Last update Fri Nov 18 14:23:22 2016 Theo CLEMENT
*/

#include "my.h"

int     printf_s(const char *str, va_list ap, int i, ...)
{
  my_putstr(va_arg(ap, char*));
}

int     printf_c(const char *str, va_list ap, int i, ...)
{
  my_putchar(va_arg(ap, char*));
}

int     printf_o(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_base(va_arg(ap, unsigned int), 8, 0);
}

int     printf_x(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_base(va_arg(ap, unsigned int), 16, 1);
}

int     printf_X(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_base(va_arg(ap, unsigned int), 16, 2);
}
