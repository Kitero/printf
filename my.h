/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#ifndef		_MY_H_
# define	_MY_H_

# include <stdlib.h>
# include <stdarg.h>

# define NB_PTR 12


int	my_printf(const char *, ...);
int	my_put_nbr(const char *str, va_list ap, int i, ...);
int	my_putstr(char *str);
int	my_putchar(char c);
int	my_put_nbr_base(unsigned int nb, int base, int size);
int	my_put_nbr_u(unsigned int nb);
int	my_put_nbr_oct(char*);
int     my_put_nbr_bin(unsigned int);
int	my_put_nbr_p(unsigned long int nb);
int     flags1(const char *str, int i, va_list ap, ...);
int     flags2(const char *str, int i, va_list ap, ...);
int     check(const char *str);
int	attribute_char(const char *str, int i, va_list ap, ...);
int	attribute_char(const char *str, int i, va_list ap, ...);
int	global(const char *str, int i, va_list ap, ...);
int	printf_s(const char *str, va_list ap, int i,  ...);
int	printf_c(const char *str, va_list ap, int i,  ...);
int	printf_o(const char *str, va_list ap, int i,  ...);
int	printf_x(const char *str, va_list ap, int i,  ...);
int	printf_X(const char *str, va_list ap, int i,  ...);
int	printf_b(const char *str, va_list ap, int i,  ...);
int	printf_S(const char *str, va_list ap, int i,  ...);
int	printf_p(const char *str, va_list ap, int i,  ...);
int	printf_u(const char *str, va_list ap, int i,  ...);
int	printf_mod(const char *str, va_list ap, int i,  ...);
int	ptr_fonction_tab(const char *str, va_list ap, int i, ...);
int	flag(int (*tab[NB_PTR])(const char* str, va_list ap, int i, ...),
	     const char *str, va_list ap, int i);

#endif	/* !_MY_H_ */
