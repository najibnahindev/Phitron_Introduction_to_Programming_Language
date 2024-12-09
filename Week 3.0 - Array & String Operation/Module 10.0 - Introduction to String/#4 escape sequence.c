#include <stdio.h>
int main()
{
    char str[20] = "I'm Batman";
    printf("%s\n", str);
    
    char str1[20] = "I'm \"Bat\"man"; //print "" inside ""
    printf("%s\n", str1);
    
    char str2[20] = "I'm \\ Batman"; //print \ inside ""
    printf("%s\n", str2);
    
    return 0;
}