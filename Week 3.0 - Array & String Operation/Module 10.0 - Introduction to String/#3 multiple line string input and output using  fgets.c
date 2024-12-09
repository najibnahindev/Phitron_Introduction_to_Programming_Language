#include <stdio.h>
int main()
{
    char str[20];
    //scanf("%[^\n]s", str);
    fgets(str, sizeof(str), stdin); //alternative of scanf in string input and output
    
    //printf("%s\n", str);
    fputs(str, stdout);
    
    return 0;
}