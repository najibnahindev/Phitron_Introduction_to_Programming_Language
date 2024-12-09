#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];  
    int number = 0;
    
    scanf("%s", str);
    
    for(int i = 0; i < n; i++)
    {
      number = number * 10 + str[i] - '0';  
    }
    
    printf("%d", number);
    
    return 0;
}