/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:43:44 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/07 19:47:59 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	jump_space(char *str)
{
	int	index;

	index = 0;
	while (check_space(str[index]) == 1)
	{
		index++;
	}
	return (index);
}

int	ft_atoi(const char *str)
{
	int				index;
	int				k;
	unsigned long	number;

	index = 0;
	number = 0;
	k = 1;
	index = jump_space((char *)str);
	if (str[index] == '-')
		k = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index ++;
	}
	if (number > 9223372036854775807 && k == 1)
		return (-1);
	else if (number > 9223372036854775807 && k == -1)
		return (0);
	return (number * k);
}

// int	main(void)
// {
// 	char	*c = "omer--12392";
// 	printf("%i\n", ft_atoi(c));
// }