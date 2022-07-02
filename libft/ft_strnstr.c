/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:31:55 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:15:17 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + x] == needle[x] && needle[x] && (i + x) < len)
		{
			x++;
		}
		if (needle[x] == '\0')
			return ((char *)&haystack[i]);
		x = 0;
		i++;
	}
	return (0);
}
