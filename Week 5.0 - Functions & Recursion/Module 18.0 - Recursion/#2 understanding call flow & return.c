#include<stdio.h>

void fun2()
{
    printf("Inside fun2\n"); 
}
void fun1()
{
    printf("Before function call (inside fun1)\n");
    
    fun2();
    
    printf("After function call (inside fun1)\n");
}
int main()
{
    printf("Before function call in main\n");

    fun1();
    
    printf("After function call in main\n");

    return 0;
}