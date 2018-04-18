/*
** my_putchar.c for my_putchar in /home/Kitero/delivery/CPool_Day07
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Tue Oct 11 09:35:06 2016 Theo CLEMENT
** Last update Wed Nov  9 14:39:27 2016 Theo CLEMENT
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}
