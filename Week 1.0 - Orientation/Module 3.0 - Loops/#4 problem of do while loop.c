#include<stdio.h>
int main()
{
    printf("I'm Vengeance (Before Loop)\n");

    int i = 10; //the condition didn't match. Still it printing the loop one time because the condition in do while loop situated after the print function.
    
    do
    {
        printf("%d. I'm Batman (With Loop)\n", i);

        i++;
    }
    while (i <= 3);

    printf("I'm Vengeance (After Loop)\n");

    return 0;
}