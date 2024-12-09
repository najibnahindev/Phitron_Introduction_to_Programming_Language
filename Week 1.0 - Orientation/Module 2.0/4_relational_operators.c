#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5, b = 10;
    
    bool compare = a == b;  //true if a is equal to b 
    printf("%d\n", compare);
    
    bool compare1 = a >= b;   //true if a is greater than or equal to b 
    printf("%d\n", compare1);
    
    bool compare2 = a <= b;  //true if a is less than or equal to b 
    printf("%d\n", compare2);
    
    bool compare3 = a > b;  //true if a is greater than b   
    printf("%d\n", compare3);
    
    bool compare4 = a < b;  //true if a is less than b 
    printf("%d\n", compare4);
    
    bool compare5 = a != b; //true if a is not equal to b 
    printf("%d\n", compare5);
    
    return 0;
}