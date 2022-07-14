/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:39:04 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/08 16:14:10 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ps;

	index = 0;
	ps = (unsigned char *)s;
	while (ps[index] != (unsigned char)c && index < n)
		index++;
	if (index < n)
		return ((void *)(s + index));
	return (0);
}

// int	main(void)
// {
// 	char c[] = {0, 1, 2, 3, 4, 5};
// 	printf("%s\n", ft_memchr(c, 2, 3));
// 	printf("a:%s\n", memchr(c, 2, 5));
// }