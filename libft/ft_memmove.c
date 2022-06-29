/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:59:55 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/29 17:22:35 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	index;

	index = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if ((size_t)(dst - src) < len)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
			len--;
		}
	}
	return (dst);
}
