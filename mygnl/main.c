#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd = open("alice.txt", O_RDONLY);
	char *line;
	char *line1;
	char *line2;
	line = get_next_line(fd);
	line1 = get_next_line(fd);
	line2 = get_next_line(fd);
	printf("main: %s", line);
	printf("main: %s", line1);
	printf("main: %s", line2);
	free(line);
	free(line1);
	free(line2);
	close(fd);
	return (0);

	// char *line;
	// int i;

	// i = 1;
	// while (i < 30)
	// {
	// 	(line = get_next_line(fd));
	// 	printf("%2d| %s", i, line);
	// 	if (!line)
	// 		printf("\n");
	// 	free(line);
	// 	++i;
	// }
	// close(fd);
	// return (0);
}
