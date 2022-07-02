/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:17:54 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 14:13:47 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = '\0';
		index++;
	}
}
