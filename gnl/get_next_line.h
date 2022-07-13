#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*get_next_line(int fd);
void	*newmal(char *str, int size);
int	findnl(char *str);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
char	*cpy(char *dst, char *src, int len);

#endif