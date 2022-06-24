/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:54:38 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/23 20:11:38 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	len -= 1;
	while (s[len])
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	if (c == '\0')
		return ((char *)(s + len));
	return (0);
}
