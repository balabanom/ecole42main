/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:20:24 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/28 17:21:27 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_set(char **str)
{
	char	*main_line;
	char	*tmp;
	char	*next;

	next = ft_strchr(*str, '\n');
	if (next)
	{
		main_line = ft_substr(*str, 0, next - *str + 1);
		tmp = ft_strdup(next + 1);
		free(*str);
		*str = tmp;
		if (!**str)
		{
			free(*str);
			*str = NULL;
		}
		return (main_line);
	}
	main_line = ft_strdup(*str);
	free(*str);
	*str = NULL;
	return (main_line);
}

static int	reap(char **str, int fd)
{
	size_t	read_size;
	char	*buf;
	char	*tmp;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (-42);
	read_size = read(fd, buf, BUFFER_SIZE);
	while (read_size > 0)
	{
		buf[read_size] = 0;
		if (!*str)
			*str = ft_strdup("");
		tmp = ft_strjoin(*str, buf);
		free(*str);
		*str = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
		read_size = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (read_size);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;
	int			size;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	size = reap(&str, fd);
	if (size == -42)
		return (NULL);
	if (!size && !str)
		return (NULL);
	line = ft_set(&str);
	return (line);
}
