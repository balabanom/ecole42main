/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:39:04 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/29 19:04:21 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ps;

	index = 0;
	ps = (unsigned char *)s;
	while (ps[index] && n > 0)
	{
		if (ps[index] == (unsigned char)c)
			return ((void *)(s + index));
		index++;
		n--;
	}
	if (c == '\0')
		return ((void *)(s + index));
	return (0);
}
