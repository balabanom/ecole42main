/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omer <omer@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 00:10:45 by omer              #+#    #+#             */
/*   Updated: 2022/06/25 00:29:57 by omer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
// {

// }
int main () {
   const char src[50] = "omer";
   char dest[50];
   strcpy(dest,"remofaruk");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 2);
   printf("After memcpy dest = %s\n", dest);
   printf("After memcpy source = %s\n", src);
   
   return(0);
}