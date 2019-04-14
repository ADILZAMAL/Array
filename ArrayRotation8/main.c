#include <stdio.h>
#include <stdlib.h>
int maxSum(int[],int);
int main()
{
    int arr[]={3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxSum(arr,n);
    printf("Maximum Value is %d\n",result);
    return 0;
}
int maxSum(int arr[],int n)
{
int i,arraySum=0,curValue=0,maxValue;
for(i=0;i<n;i++)
    {
        arraySum=arraySum+arr[i];
        curValue=curValue+i*arr[i];

    }

maxValue=curValue;
for(i=1;i<n;i++)
{
    curValue=curValue+arraySum-n*arr[n-i];
    if(curValue>maxValue)
        maxValue=curValue;
}
return maxValue;




}
