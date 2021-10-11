#include <stdio.h>

int main(void)
{
    int c;
    scanf("%i",&c);
    
    int b;
    scanf("%i",&b);

    int a = b*c;
    printf("%i multiplié par %i est égal a %i\n", c, b, a);
}
