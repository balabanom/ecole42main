#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *c;
	char *d;

	c = (char *)malloc(5);
	strcpy(c, "faru");
	d = c;
	strcpy(c, "omer");
	printf("%s\n",d);

}