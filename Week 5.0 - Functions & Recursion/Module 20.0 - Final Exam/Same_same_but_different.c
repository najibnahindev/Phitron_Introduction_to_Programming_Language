#include<stdio.h>
#include<string.h>
int main()
{
    char str[101], str1[101], str2[101];
    scanf("%s %s %s", str, str1, str2);
   
    int n = strlen(str);
    int count1 = 0, count2 = 0, count3 = 0;
   
    for(int i = 0; i < n; i++) {
  
        if(str1[i] != str[i]) count1++;
        if(str2[i] != str[i]) count1++;
       
        if(str[i] != str1[i]) count2++;
        if(str2[i] != str1[i]) count2++;
       
        if(str[i] != str2[i]) count3++;
        if(str1[i] != str2[i]) count3++;
    }
    int min = count1;
    if(count2 < min) min = count2;
    if(count3 < min) min = count3;

   
   printf("%d", min);
   return 0;
}