/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:54:38 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/08 17:16:42 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	*ps;

	len = 0;
	ps = (unsigned char *)s;
	while (ps[len])
	{
		len++;
	}
	if (c == '\0')
		return ((char *)(s + len));
	len -= 1;
	while (ps[len] != (unsigned char) c && len >= 0)
	{
		len--;
	}
	if (len >= 0)
	{
		if (ps[len] == (unsigned char)c)
			return ((char *)(ps + len));
	}
	return (0);
}

// int	main(void)
// {
// 	char c[] = "omerfarukbalaban";
// 	printf("%s\n", ft_strrchr(c, 'o' + 256));
// 	printf("%s\n", strrchr(c, 'o' + 256));
// }