/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:26:32 by obalaban          #+#    #+#             */
/*   Updated: 2022/08/10 13:38:05 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	len;

	if (!c)
	{
		ft_putstr("(null)");
		return (6);
	}
	len = ft_strlen(c);
	while (*c)
	{
		write(1, &*c, 1);
		c++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
			return (ft_putnbr_base(2147483648, "0123456789", 0) + 1);
		nb *= -1;
		return (ft_putnbr_base(nb, "0123456789", 0) + 1);
	}
	return (ft_putnbr_base(nb, "0123456789", 0));
}

int	ft_putnbr_base(size_t nb, char *base, int digit1)
{
	size_t		uzb;
	static int	digit;

	digit = digit1;
	uzb = ft_strlen(base);
	if (nb < uzb)
	{
		write(1, &base[nb], 1);
		digit++;
	}
	if (nb >= uzb)
	{
		ft_putnbr_base(nb / uzb, base, digit);
		ft_putnbr_base(nb % uzb, base, digit);
	}
	return (digit);
}
