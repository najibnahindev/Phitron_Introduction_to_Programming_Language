#include<stdio.h>
int main()
{
    int a = 6, b = 7, c = 10, d = 15;
    
    a += 5; //a = a + 5
    b -= 5; //b = b - 5
    c *= 5; //c = c * 5
    d /= 5; //d = d / 5

    printf("%d\n%d\n%d\n%d\n", a, b, c, d);

    c++;  //c++ means c = c + 1
    d--;  //d-- means d = d - 1

    printf("%d\n%d\n", c, d);
 
    printf("%d\n%d\n", ++a, --b); //++a means a = a + 1 and --b means b = b - 1 
    return 0;
}