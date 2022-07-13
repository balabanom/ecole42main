/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:26:49 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/13 23:28:52 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*newmal(char *str, int size)
{
	char	*temp;
	int		total;
	int		i;

	total = strlen(str) + size;
	i = 0;
	temp = (char *)malloc(total + 1);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}

int	findnl(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-42);
}

char	*ft_strjoin(char *s1, char *s2)
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

size_t	ft_strlen(char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

char	*cpy(char *dst, char *src, int len)
{
	int i;

	i = 0;
	if (len == -42)
		return (0);
	dst = (char *)malloc(len + 1);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	char	*c;
// 	char	*c1;
// 	char	*d;

// 	c = (char *)malloc(5);
// 	c1 = (char *)malloc(5);
// 	d = (char *)malloc(10);
// 	strcpy(c, "omer");
// 	strcpy(c1, "omer");
// 	d = ft_strjoin(c, c1);
// 	printf("%s\n", d);
// 	free(c);
// 	free(c1);
// 	free(d);
// 	system("leaks m");
// }