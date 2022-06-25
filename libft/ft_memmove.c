/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalaban <obalaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:59:55 by obalaban          #+#    #+#             */
/*   Updated: 2022/06/25 19:01:36 by obalaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					index;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	index = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (len > 0)
	{
		d[index] = s[index];
		index++;
		len--;
	}
	return (dst);
}

int main (void)
{
	char string [] = "stackoverflow";
	char string1 [] = "stackoverflow";
    char *third, *fourth;
    third = string;
    fourth = string1;

    puts(string);
    memmove(fourth+5, fourth, 11);
    puts(fourth);
    memcpy(third+5, third, 11);
    puts(third);
    return 0;

}