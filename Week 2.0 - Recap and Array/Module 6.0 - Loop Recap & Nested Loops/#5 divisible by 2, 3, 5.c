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
            break;  //If I don't give break statement here, its not stopping until the loop condition is true
        }
        
    }
    return 0;
}