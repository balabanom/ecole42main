/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:26:29 by obalaban          #+#    #+#             */
/*   Updated: 2022/08/03 12:10:20 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	letters(va_list *a, const char *s)
{
	if (*s == '%')
		return (ft_putchar('%'));
	else if (*s == 'c')
		return (ft_putchar(va_arg(*a, int)));
	else if (*s == 's')
		return (ft_putstr(va_arg(*a, char *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_arg(*a, int)));
	else if (*s == 'u')
		return (ft_putnbr_base(va_arg(*a, unsigned int), "0123456789", 0));
	else if (*s == 'p')
	{
		ft_putstr("0x");
		return (2 + ft_putnbr_base(va_arg(*a, unsigned long), BASE16L, 0));
	}
	else if (*s == 'x')
		return (ft_putnbr_base(va_arg(*a, unsigned int), BASE16L, 0));
	else if (*s == 'X')
		return (ft_putnbr_base(va_arg(*a, unsigned int), BASE16U, 0));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	a;

	va_start(a, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			len += letters(&a, s);
			s++;
		}
		else
		{
			len++;
			write(1, &*s, 1);
			s++;
		}
	}
	va_end(a);
	return (len);
}
