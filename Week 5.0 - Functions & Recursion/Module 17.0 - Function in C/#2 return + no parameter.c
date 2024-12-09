#include<stdio.h>
int a, b;
int add()
{
    printf("Function add Called\n");
    int sum = a + b;  //using global variable
    
    return sum;
}
int sub()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Function sub Called\n");
    int substr = x - y;  //using input variable

    return substr;
}
double getPI()
{
    return 3.1416;
}
int main()
{
    printf("Before the add\n");
    a = 5, b = 20;  
    printf("%d\n", add());
    a = 68, b = 1;  
    printf("%d\n", add());
    printf("After the add\n");

    printf("\n");

    printf("Before the sub\n");
    printf("%d\n", sub()); 
    printf("%d\n", sub());
    printf("After the sub\n");

    printf("\n%.4lf\n", getPI());

    return 0;
}