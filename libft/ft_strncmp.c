/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:20:35 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/29 15:30:36 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while ((s1[index] || s2 [index]) && index < n)
	{
		if ((unsigned char)s1[index] < (unsigned char)s2[index])
			return (-1);
		if ((unsigned char)s1[index] > (unsigned char)s2[index])
			return (1);
		index++;
	}
	return (0);
}
