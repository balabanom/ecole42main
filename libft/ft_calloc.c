/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:43:48 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/02 19:05:32 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sum;
	void	*d;

	sum = count * size;
	d = malloc(sum);
	if (!d)
		return (0);
	ft_memset(d, 0, sum);
	return (d);
}
