/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:31:55 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/30 13:20:32 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
