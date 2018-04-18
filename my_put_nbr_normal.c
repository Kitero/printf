/*
** my_put_nbr_normal.c for  in /home/Kitero/delivery/PSU_2016_my_printf
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Fri Nov 18 15:23:29 2016 Theo CLEMENT
** Last update Fri Nov 18 15:24:25 2016 Theo CLEMENT
*/

int     my_put_nbr_normal(int nb)
{
  int   i;
  char  j;

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
