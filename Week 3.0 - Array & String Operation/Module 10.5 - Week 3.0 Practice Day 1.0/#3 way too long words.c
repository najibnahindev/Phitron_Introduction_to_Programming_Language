#include<stdio.h>
int main()
{
  int n, length = 0;
  scanf("%d",&n);
    
  char str[101];
  
  for(int i = 0; i < n; i++)
  {
    scanf("%s", str);
    
    while(str[length] != '\0')
    {
      length++;
    }
    if(length > 10)
    {
      printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
    }
    else
    {
      printf("%s\n", str);
    }
  }
return 0;
}