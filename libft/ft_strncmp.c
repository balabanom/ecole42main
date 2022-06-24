/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:20:35 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/23 20:33:32 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	index;

	index = 0;
	while ((s1[index] || s2 [index]) && index <= n)
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		if (s1[index] == s2[index])
			return (0);
	}
	return (2);
}

int	main(int argc, char *argv[])
{
	printf("%i\n", ft_strncmp("omer", "omar", 4));
}
bitmedi main dene.