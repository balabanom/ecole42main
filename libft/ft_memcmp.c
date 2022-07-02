/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:07:58 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:14:33 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	unsigned char		*ps1;
	unsigned char		*ps2;

	index = 0;
	ps1 = (unsigned char *)(s1);
	ps2 = (unsigned char *)(s2);
	while (index < n)
	{
		if (ps1[index] != ps2[index])
			return (ps1[index] - ps2[index]);
		index++;
	}
	return (0);
}
