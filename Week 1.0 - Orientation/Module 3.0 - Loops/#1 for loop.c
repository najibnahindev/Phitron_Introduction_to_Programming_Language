#include<stdio.h>
int main()
{
    printf("I'm Vengeance (Before Loop)\n");

    for(int i = 1; i <= 3; i++)
    {
        printf("%d. I'm Batman (With Loop)\n", i);
    }

    printf("I'm Vengeance (After Loop)\n");

    return 0;
}