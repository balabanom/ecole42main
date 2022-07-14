/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:15:27 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/08 16:45:10 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	d = (char *)malloc(len + 1);
	i = 0;
	if (!d)
		return (NULL);
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		d[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	d[i] = '\0';
	return (d);
}

// int main(void)
// {
// 	char	*c = "";
// 	char	*c1 = "42";
// 	printf("%s\n", ft_strjoin(c, c1));
// 	printf("%zu\n", ft_strlen(c1));
// 	printf("%d\n", !(strcmp(ft_strjoin(c, c1), "42")));
// }