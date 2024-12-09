#include<stdio.h>
int main()
{
    // overflow and random output issue
    /* 
    int a = 100000, b = 100000;
    printf("%d\n", a * b); 
    */
    
    int a = 100000, b = 100000;
    printf("%lld\n", 1ll * a * b);


    //alternative solutions
    /* 
    int a = 100000;
    double b = 100000;
    long long result = a * b;
    printf("%lld\n", result); 
    */

    /*
    long long a = 100000, b = 100000;
    long long result = a * b;
    printf("%lld\n", result); 
    */

    return 0;
}