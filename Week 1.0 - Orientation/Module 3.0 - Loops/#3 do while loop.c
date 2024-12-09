#include<stdio.h>
int main()
{
    printf("I'm Vengeance (Before Loop)\n");

    int i = 1;
    
    do
    {
        printf("%d. I'm Batman (With Loop)\n", i);

        i++;
    }
    while (i <= 3);

    printf("I'm Vengeance (After Loop)\n");

    return 0;
}