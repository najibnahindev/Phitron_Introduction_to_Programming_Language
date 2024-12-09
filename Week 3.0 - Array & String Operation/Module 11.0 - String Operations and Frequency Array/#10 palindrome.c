#include<stdio.h>
#include<string.h>
int main()
{
  char str[15];
  scanf("%s", str);
  
  char str1[15];
  
  strcpy(str1, str);

  int length = strlen(str1);

  for(int i = 0, j = length -1; i <= j; i++, j--)
  {
    int temp = str1[i];
    str1[i] = str1[j];
    str1[j] = temp;
  }
  
  int compare = strcmp(str, str1);
  
  if(compare == 0)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }

  return 0;
}