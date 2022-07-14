#include <stdio.h>
#include <stdlib.h>

void fon(char *c)
{
    int i = 0;
    while (i < 4)
    {
        c[i] = 'o';
        i++;
    }
}

int main(void)
{
    char *c;
    c = (char *)malloc(1);
    printf("aa%s\n",c);
    fon(c);
    printf("%s\n",c);
}