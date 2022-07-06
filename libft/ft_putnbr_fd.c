/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:15:28 by obalaban          #+#    #+#             */
/*   Updated: 2022/07/06 19:34:00 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(fd, s, ft_strlen(s));
	free(s);
}

// int	main(void)
// {
// 	int	fd = open("c.txt", O_WRONLY | O_APPEND);
// 	ft_putnbr_fd(-2147483648, fd);
// }