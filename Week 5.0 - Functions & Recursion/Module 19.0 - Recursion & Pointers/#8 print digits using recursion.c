#include<stdio.h>
void digit(int num)
{
    if(num == 0) return;

    int dig = num % 10;
    digit(num / 10);

    printf("%d ", dig);

}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if(num == 0) printf("0");
        
        digit(num);
        printf("\n");
    }
    
    return 0;
}