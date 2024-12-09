#include <stdio.h>
#include <string.h>
int main()
{
    char str0[30] = "bat";
    char str[30] = "man";
    int length = strlen (str);
    
    printf("%s %s\n", str, str0);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
      str[i] = str0[i];
    }
    str[length] = '\0';
    
    printf("%s %s", str, str0);
  
    return 0;
}