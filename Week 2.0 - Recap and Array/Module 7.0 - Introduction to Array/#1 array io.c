#include<stdio.h>
int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]); //print the value initialized in the array
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", &arr[i]); //print the address of the array
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        arr[i] += 5;  //using operatiob in all the arrays
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); //print the value after the operation
    }
    return 0;
}