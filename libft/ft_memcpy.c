/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 00:10:45 by omer              #+#    #+#             */
/*   Updated: 2022/07/07 17:39:18 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					index;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	index = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
	{
		d[index] = s[index];
		index++;
		n--;
	}
	return (dst);
}

// int main (void)
// {
// 	char	c [] = "1234567890asdfgh";
// 	char	c1 [] = "1234567890asdfgh";
// 	ft_memcpy(c + 5, c, 9);
// 	//memmove(c1 + 5, c1, 9);
// 	printf("memcpy = %s\n", c);
// 	//printf("memmove = %s\n", c1);

// }