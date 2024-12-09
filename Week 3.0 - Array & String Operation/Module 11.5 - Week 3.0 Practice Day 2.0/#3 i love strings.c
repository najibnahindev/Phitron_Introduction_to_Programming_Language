#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
    char str[51];
    char str1[51];
    char final[102];
    
    scanf("%s", str);
    scanf("%s", str1);
    
    int l = strlen(str);
    int l1 = strlen(str1);
    int k = 0;
    
    for(int j = 0; j < l || j < l1; j++)
    {
      if(j < l)
      {
        //k++;
        final[k++] = str[j];
      }
      if(j < l1)
      {
        //k++;
        final[k++] = str1[j];
      }
    }
    
    final[k] = '\0';
    printf("%s\n", final);
    }
    
    return 0;
}