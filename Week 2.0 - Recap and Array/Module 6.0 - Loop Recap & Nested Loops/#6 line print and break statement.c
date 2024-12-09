#include<stdio.h>
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);

        printf("Line 1\n");
        printf("Line 2\n");

        if(i == 5)
        {
            break;
        }

        printf("Line 3\n");
        printf("Line 4\n");
    }
    return 0;
}