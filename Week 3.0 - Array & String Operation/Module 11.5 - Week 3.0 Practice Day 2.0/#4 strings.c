#include<stdio.h>
#include<string.h>
int main()
{
  char str[11];
  char str1[11];
  
  scanf("%s%s", str, str1);
  
  int length = strlen(str);
  int length1 = strlen(str1);
  
  printf("%d %d\n", length, length1);
  
  char str2[11];
  strcpy(str2, str);
  strcat(str2, str1);
  
  printf("%s\n", str2);
  
  char temp = str[0];
  str[0] = str1[0];
  str1[0] = temp;
  
  printf("%s %s\n", str, str1);
  
  return 0;
}