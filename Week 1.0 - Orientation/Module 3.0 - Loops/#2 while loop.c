#include<stdio.h>
int main()
{
    printf("I'm Vengeance (Before Loop)\n");

    int i = 1;
    
    while( i <= 3)
    {
        printf("%d. I'm Batman (With Loop)\n", i);

        i++;
    }

    printf("I'm Vengeance (After Loop)\n");

    return 0;
}