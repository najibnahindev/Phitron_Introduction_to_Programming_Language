#include <stdio.h>
int arr[10000];
int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if(arr[i] < 1) printf("Entry-level candidate\n");
    else if(arr[i] >= 1 && arr[i] <= 3) printf("Junior candidate\n");
    else if(arr[i] >= 4 && arr[i] <= 7) printf("Mid-level candidate\n");
    else printf("Senior candidate\n");
  }
   
  return 0;
}