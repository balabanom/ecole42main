/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:33:27 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/08 16:13:52 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int		size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		i;
	long	n2;

	n2 = (long)n;
	d = (char *)malloc(ft_size(n2) + 1);
	if (!d)
		return (NULL);
	i = ft_size(n2) - 1;
	d[i + 1] = '\0';
	if (n2 < 0)
	{
		n2 *= -1;
		d[0] = '-';
	}
	if (n2 == 0)
		d[0] = '0';
	while (n2 >= 1)
	{
		d[i] = (n2 % 10) + '0';
		n2 = n2 / 10;
		i--;
	}
	return (d);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 0)
// 		return 1;
// 	int	c = ft_atoi(argv[1]);
// 	char	*d = ft_itoa(c);
// 	printf("%d\n", c);
// 	printf("%s\n", d);
// }