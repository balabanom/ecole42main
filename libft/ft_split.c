/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:24:32 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/05 19:33:14 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	create(char **tab, char const *s, char c)
{
	char		**d;
	char const	*cursor;

	cursor = s;
	d = tab;
	while (*cursor)
	{
		while (*s == c)
			s++;
		cursor = s;
		while (*cursor && *cursor != c)
			cursor++;
		if (*cursor == c || cursor > s)
		{
			*d = ft_substr(s, 0, cursor - s);
			s = cursor;
			d++;
		}
	}
	*d = NULL;
}

static int	cwords(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			counter++;
		while (*s && *s != c)
			s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		size;

	if (!s)
		return (NULL);
	size = cwords(s, c);
	d = (char **)malloc(sizeof(char *) * (size + 1));
	if (!d)
		return (NULL);
	create(d, s, c);
	return (d);
}



/* int main()
{
	char **output;
	output = (char **)malloc(1024*16);
	output = ft_split("yasin||  ||this|for|me|||||!|", '|');
	int index = 0;
	while (index < 5)
	{
		printf("\n%s",output[index]);
		index++;
	}
} */