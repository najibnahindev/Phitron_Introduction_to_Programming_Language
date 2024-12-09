#include<stdio.h>
int main()
{
    int i;
    for(i = 100; i <= 300; i++)
    {
        printf("Checking %d...\n", i);
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("%d is the number\n", i);
            continue; //If I don't give continue statement here, it will show line 10 twice
        }    
    printf("%d is not the number\n\n", i);
    }
    return 0;
}