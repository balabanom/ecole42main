/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:41:43 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:14:50 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if ((unsigned char)s[index] == (unsigned char)c)
			return ((char *)(s + index));
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (0);
}
