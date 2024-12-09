#include<stdio.h>
int main()
{
  char str[11];
  scanf("%s", str);
  char str1[11];
  scanf("%s", str1);
  int n = 0, m = 0;
  
  for(int i = 0; str[i] != '\0'; i++)
  {
    n++;
  }
  for(int i = 0; str1[i] != '\0'; i++)
  {
    m++;
  }
  printf("%d %d\n", n, m);
  printf("%s%s\n", str, str1);
  
  char temp = str[0]; 
  str[0] = str1[0];
  str1[0] = temp;
  
  printf("%s %s\n", str, str1);

return 0;
}