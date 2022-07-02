/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:56:50 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:14:59 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (dstsize == 0)
		return (len);
	while (index < dstsize - 1 && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}
