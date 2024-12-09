#include<stdio.h>
int main()
{
  char str[100001];
  scanf("%s", str);
  char str1[100001];
  int n = 0, m = 0;
  
  for(int i = 0; str[i] != '\0'; i++)
  {
    n++;
  }
  for(int i = 0; i < n; i++)
  {
    str1[i] = str[n - i - 1]; 
  }
  str1[n] = '\0';
  for(int i = 0; i < n; i++)
  {
    if(str[i] == str1[i])
    {
      m++;
    }
  }
  if(m == n)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

return 0;
}