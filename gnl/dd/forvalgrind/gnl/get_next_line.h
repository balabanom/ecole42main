#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*get_next_line(int fd);
char	*newmal(char *str, int size);
int	findnl(char *str);
void	ft_strjoin(char *str, char *med);
size_t	ft_strlen(char *s);
char	*cpy(char *dst, char *src, int len);

#endif