/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:26:35 by obalaban          #+#    #+#             */
/*   Updated: 2022/08/10 13:38:16 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# ifndef BASES
#  define BASE10 "0123456789"
#  define BASE16L "0123456789abcdef"
#  define BASE16U "0123456789ABCDEF"
# endif

int		ft_printf(const char *s, ...);
int		letters(va_list *a, const char *s);
int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
int		ft_putstr(char *c);
int		ft_putnbr_base(size_t nbr, char *base, int digit1);
int		ft_putnbr(int nb);

#endif