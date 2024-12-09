#include<stdio.h>
#include<string.h>

int main() 
{
  char str[10001];
  scanf("%s", str);

  char hello[] = "hello";
  int j = 0;

  for(int i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] == hello[j]) { 
        j++;
    }
    if (j == 5) {
        printf("YES\n");
        return 0;
    }
  }
  printf("NO\n");
  
  return 0;
}
