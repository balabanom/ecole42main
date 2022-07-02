#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	// int	x = 5;
	// int *c = &x;
	// *c = 6;
	// printf("%i\n", x);
	char *c = "omer";
	char **x = &c;
	*x = "omerf";
	printf("%s\n", c);


	// void	*c1= "omerfaruk";
	// void	*c = "omer";
	// size_t x = (size_t)(c1 - c);
	// printf("%zu\n", x);

	// char	*c = malloc(4);
	// int i = 0;
	// printf("s\n");
	// c[20] = 'o';
	// while (c[20])
	// {
	// 	printf("%i girildi\n", i);
	// 	i++;
	// }
}