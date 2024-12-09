#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5;

    bool logical_and = a > 2 && a < 10;  //&& means logical and
    printf("%d\n", logical_and);  //true if both conditions are true

    bool logical_and1 = a > 2 && a < 3;
    printf("%d\n", logical_and1);  //false if one condition is false

    bool logical_or = a > 2 || a < 3;  //|| means logical or
    printf("%d\n", logical_or);  //true if one condition is true

    bool logical_or1 = a > 6 && a < 3;
    printf("%d\n", logical_or1);  //false if both conditions are false

    bool logical_not = !(a > 2 && a < 10);  //! means logical not
    printf("%d\n", logical_not);  //true become false

    bool logical_not1 = !(a > 6 && a < 3);
    printf("%d\n", logical_not1);  //false become true

    return 0;
}
