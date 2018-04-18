/*
** my_getnbr.c for  in /home/Kitero/delivery
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Wed Oct 19 08:08:39 2016 Theo CLEMENT
** Last update Sat Nov 19 16:17:29 2016 Theo CLEMENT
*/

int	my_getnbr(char *str)
{
  int	i;
  int	value;
  int	sign;

  sign = 0;
  i = 0;
  if (str[i] == '-')
    {
      sign = 1;
      i++;
    }
  value = 0;
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      value = value + str[i] - 48;
      if (str[i + 1] != '\0')
	value *= 10;
      i++;
    }
  if (sign == 1)
    value *= -1;
  return (value);
}
