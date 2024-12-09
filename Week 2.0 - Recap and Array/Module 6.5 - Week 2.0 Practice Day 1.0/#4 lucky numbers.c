#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int divi = num / 10;
    int mod = num % 10;

    if(divi == 0 || mod == 0 || ((divi >= mod) && divi % mod == 0) || ((mod > divi) && (mod % divi) == 0))
    {
        printf("YES");
    }
    else
    {
      printf("NO");
    }
    return 0;
}
