#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int arr[26] = {0};

    for(int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';
        arr[index] += 1; 
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > 0)
        {
            printf("%c", i + 'a');
        } 
    }
    
    return 0;
}