#include<stdio.h>
int main()
{
    char arr2[3];
    
    for(int j = 0; j < 3; j++)
    {
        scanf("%c", &arr2[j]);
    }
    for(int j = 0; j < 3; j++)
    {
        printf("%c \n", arr2[j]); //print the value initialized in the charecter array
    }
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", &arr2[j]); //print the address of the charecter array
    }
    
    return 0;
}