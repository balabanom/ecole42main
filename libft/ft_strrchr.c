/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:54:38 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/29 15:57:43 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	if (c == '\0')
		return ((char *)(s + len));
	len -= 1;
	while (s[len] != (char) c && len >= 0)
	{
		len--;
	}
	if (s[len] == c)
		return ((char *)(s + len));
	return (0);
}
