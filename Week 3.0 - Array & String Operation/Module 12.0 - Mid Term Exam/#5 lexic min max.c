#include<stdio.h>
#include<string.h>
int main()
{
  char str[1001], str1[1001], str2[1001];
  scanf("%s %s %s", str, str1, str2);
  
  int comp = strcmp(str, str1);
  int comp1 = strcmp(str, str2);
  int comp2 = strcmp(str1, str2);
  
  if(comp < 0 && comp1 < 0) printf("%s\n", str);
  else if(comp >= 0 && comp2 < 0) printf("%s\n", str1);
  else printf("%s\n", str2);

  
  if(comp >= 0 && comp1 >= 0) printf("%s\n", str);
  else if(comp < 0 && comp2 >= 0) printf("%s\n", str1);
  else printf("%s\n", str2);

  return 0;
}