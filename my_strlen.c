/*
** my_strlen.c for my_strlen in /home/Kitero/Prog Projects
** 
** Made by Theo CLEMENT
** Login   <Kitero@epitech.net>
** 
** Started on  Thu Oct  6 16:34:12 2016 Theo CLEMENT
** Last update Thu Oct  6 17:13:54 2016 Theo CLEMENT
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
