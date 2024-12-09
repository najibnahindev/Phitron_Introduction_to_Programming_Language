#include<stdio.h>
#include<string.h>
int main()
{
  char str[15] = "Batman";
  char str1[15] = "Batmam";

  int comp = strcmp(str, str1);  //here str > str1 thats why it will show positive
  int comp1 = strcmp(str1, str);  //here str > str1 thats why it will show negative
  
  strcpy(str1, "Batman");
  int comp2 = strcmp(str, str1);  //here str = str1 thats why it wil show zero

  printf("%d\n%d\n%d", comp, comp1, comp2);

  return 0;
}