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
	return(len);
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

// int	ft_putnbr(int nb)
// {
// 	int	dizi[10];
// 	int	basamak;
// 	int	last;

// 	basamak = 0;
// 	if (nb < 0)
// 	{
// 		nb = -nb;
// 		write(1, "-", 1);
// 	}
// 	if (nb == 0)
// 		write(1, "0", 1);
// 	while (nb > 0)
// 	{
// 		dizi[basamak] = ((nb % 10) + '0');
// 		nb = nb / 10;
// 		basamak++;
// 	}
// 	last = basamak - 1;
// 	while (last >= 0)
// 	{
// 		write(1, &dizi[last], 2);
// 		last--;
// 	}
// 	return (basamak);
// }

int	ft_putnbr_base(size_t nb, char *base, int basamak1)
{
	size_t	uzb;
	static int basamak;

	basamak = basamak1;
	uzb = ft_strlen(base);
	if (nb < uzb)
	{
		write(1, &base[nb], 1);
		basamak++;
	}
	if (nb >= uzb)
	{
		ft_putnbr_base(nb / uzb, base, basamak);
		ft_putnbr_base(nb % uzb, base, basamak);
	}
	return (basamak);
}
