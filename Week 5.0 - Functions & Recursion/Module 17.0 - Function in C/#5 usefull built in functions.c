#include<stdio.h>
#include<math.h>
int main()
{
    double a = 10.4, b = 10.6;
    printf("%lf\n", ceil(a));
    printf("%lf\n", floor(a));
    printf("%lf\n", round(a));
    printf("%lf\n", round(b));

    printf("%.0lf\n", sqrt(4));
    printf("%.0lf\n", pow(2 , 3));


    return 0;
}