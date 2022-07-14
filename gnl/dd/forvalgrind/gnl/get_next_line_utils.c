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

char	*newmal(char *str, int size)
{
	char	*temp;
	int		total;
	int		i;

	if (ft_strlen(str) == 0)
	{
		free(str);
		temp = (char *)malloc(size + 1);
		return (temp);
	}
	total = ft_strlen(str) + size;
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

void	ft_strjoin(char *str, char *med)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (med[i])
	{
		str[len] = med[i];
		i++;
		len++;
	}
	str[len] = '\0';
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

// 	/* for new join function
// 	char *str ;
// 	char *d = "faruk";

// 	str = (char *)malloc(5);
// 	printf("1 %s\n", str);
// 	str = newmal(str, 6);
// 	printf("2 %s\n", str);
// 	ft_strjoin(str, "omer");
// 	printf("3 %s\n", str);
// 	ft_strjoin(str, "faruk");
// 	printf("4 %s\n", str);
// 	ft_strjoin(str, "balaban");
// 	printf("5 %s\n", str);
// 	free(str); */

// /* 	for newmal function
// 	char *c;

// 	c = cpy(c, "omer", 8);
// 	printf("%s\n", c);
// 	c = newmal(c, 9);
// 	free(c); */


// 	/* for old ft_strjoin function
// 	char *c = "omer";
// 	char *d = "faruk";
// 	char *b;

// 	b = ft_strjoin(c, d);
// 	printf("%s\n", b);
// 	free(b); */

// 	/* for cpy function
// 	char *d;
// 	char *c = "omer";
// 	d = cpy(d, c, 5);
// 	printf("%s\n", d);
// 	free(d); */
// }