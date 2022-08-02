#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int ft_printf(const char *s, ...);
int	letters(va_list *a, const char *s);
int	ft_putchar(char c);
size_t	ft_strlen(const char *s);
int	ft_putstr(char *c);
int	ft_putnbr_base(size_t nbr, char *base, int basamak1);
int	ft_putnbr(int nb);

#endif