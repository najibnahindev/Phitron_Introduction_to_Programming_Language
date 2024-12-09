#include <stdio.h>
int main()
{
    char str[5] = "5";
    printf("%d\n", str[0]);  //printed the ascii value 53
    printf("%d\n", str[0] - '0');  //the ascii value of '0' is 48. so 53 - 48 = 5 

    return 0;
}