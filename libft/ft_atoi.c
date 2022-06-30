/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:43:44 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/30 16:35:31 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	jump_space(char *str)
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

int	main(void)
{
	char	*c = "    -9223372036854775808";

	printf("%i\n", ft_atoi(c));
	printf("%i\n", atoi(c));
}
