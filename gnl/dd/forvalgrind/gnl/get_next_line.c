/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:26:29 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/12 17:48:49 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		*med;
	int			size;

	if (!str)
		str = (char *)malloc(1);
	med = (char *)malloc(BUFFER_SIZE + 1);
	while (findnl(str) == -42)
	{
		size = read(fd, med, BUFFER_SIZE);
		if (!size)
			break;
		str = newmal(str, size);
		ft_strjoin(str, med);
	}
	free(med);
	if (findnl(str) == -42)
		med = cpy(med, str, ft_strlen(str) + 1);
	else
		med = cpy(med, str, findnl(str) + 1);

	str += findnl(str) + 1;
	if (ft_strlen(med) == 0)
		return (NULL);
	return (med);
}

int	main(void)
{
	int fd = open("c.txt", O_RDONLY);
	char *c = get_next_line(fd);
	printf("son: %s\n", c);
	free(c);
	// system("leaks m");
	// int i = 0;
	// while (i < 3)
	// {
	// 	get_next_line(fd);
	// 	i++;
	// }
}