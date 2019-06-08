//subArray with maximum product value//
//time complexity O(n)
//space complexity O(1)

#include <stdio.h>
#include <stdlib.h>
int max1(int a,int b,int c)
{
    int max=(a>b)?(a>c?a:c):(b>c?b:c);
    return max;
}
int min1(int a,int b,int c)
{
    int min=(a<b)?(a<c?a:c):(b<c?b:c);
    return min;
}
int max(int a,int b)
{
    int max=(a>b?a:b);
    return max;
}
int maxSubarrayProduct(int arr[],int n)
{
    int curmax=arr[0],curmin=arr[0],prevmax=arr[0],prevmin=arr[0],i,ans=arr[0];
    for(i=1;i<n;i++)
    {
        curmax=max1(arr[i],arr[i]*prevmax,arr[i]*prevmin);
        curmin=min1(arr[i],arr[i]*prevmax,arr[i]*prevmin);
        ans=max(ans,curmax);
        prevmax=curmax;
        prevmin=curmin;
    }
    return ans;
}


int main()
{
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Sub array product is %d",
            maxSubarrayProduct(arr, n));
    return 0;
}
