#include<stdio.h>
int main()
{
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        count++;
    }

    printf("%d", count); //One for Loop and it's running 3 times. So Loop Iteration Count 3

    int count1 = 0;
    for(int ii = 0; ii < 3; ii++)
    {
        for(int c = 1; c < 5; c++)
        {
            count1++;
        }
    }

    printf("\n%d", count1); //2nd Loop is running 4 times and first loop is running 3 times. So total 12 times.

    int count2 = 0;
    for(int iii = 0; iii < 3; iii++)
    {
        for(int cc = 1; cc < 5; cc++)
        {
            //count2++;
        }

        count2++;
    }

    printf("\n%d", count2); //This is like the 2nd one but here I put the count2 increment outside nested Loop, That's why this is counting the first one only.

    return 0;
}