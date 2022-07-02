/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:08:33 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:14:53 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	int		index;

	index = 0;
	d = (char *)malloc(ft_strlen(s1) + 1);
	if (d == NULL)
		return (NULL);
	while (s1[index])
	{
		d[index] = s1[index];
		index++;
	}
	d[index] = '\0';
	return (d);
}
