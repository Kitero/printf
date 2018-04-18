/*
** flags2.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Fri Nov 18 14:28:26 2016 Theo CLEMENT
** Last update Sat Nov 19 16:17:13 2016 Theo CLEMENT
*/

#include <stdarg.h>

int     printf_b(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_bin(va_arg(ap, unsigned int));
}

int     printf_S(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_oct(va_arg(ap, char*));
}

int     printf_u(const char *str, va_list ap, int i, ...)
{
  my_put_nbr_u(va_arg(ap, unsigned int));
}

int     printf_p(const char *str, va_list ap, int i, ...)
{
  my_putstr("0x");
  my_put_nbr_p(va_arg(ap, unsigned long int));
}

int     printf_mod(const char *str, va_list ap, int i, ...)
{
  my_putchar('%');
}
