#include <stdio.h>
int main() 
{
    int n, num;
    int count0 = 0, count1 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num);
        if (num == 0) 
        {
            count0++;
        } 
        else if (num == 1) 
        {
            count1++;
        }
    }
    
    printf("%d %d\n", count0, count1);
    
    return 0;
}