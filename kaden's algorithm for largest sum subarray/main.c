#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    return (a>b?a:b);
}
int maxSubArraySum(int arr[],int n)
{
 int localSum=arr[0],globalsum=arr[0],i;
 for(i=1;i<n;i++)
 {
    localSum=max(arr[i],arr[i]+localSum);
    globalsum=max(globalsum,localSum);
 }
  return globalsum;
}


int main()
{
int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    printf("max sum =%d",max_sum);
    return 0;
}
