#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
return (a>b?a:b);
}
int kadane(int arr[],int n)
{
    int i,localmax=arr[0],globalmax=arr[0];
    for(i=1;i<n;i++)
    {
        localmax=max(localmax+arr[i],arr[i]);
        globalmax=max(globalmax,localmax);
    }
    return globalmax;
}
int maxCircularSum(int arr[],int n)
{
    int maxStraight=kadane(arr,n);  //if maximum subArray is present in single straight chain
    int i,total_Sum=0;
    for(i=0;i<n;i++)
    {
      total_Sum=total_Sum+arr[i];    //total sum of the given array
      arr[i]=-1*arr[i];              //invert array
    }
    int min_kadane=kadane(arr,n);    //this will give the sum of the subArray which we have to leave if our
                                     //max sum subArray is present in the ring form
    int maxCircular=total_Sum+min_kadane;  //maxSum when in ring form= total sum-kadane of invert array
    return max(maxStraight,maxCircular);   // if subArray is present in circular form then maxCircular will
                                           //be larger and else if maxSum  subArray is present in single
                                        // straight chain then maxStraight will be larger
}
int main()
{
    int a[] =  {11, 10, -20, 5, -3, -5, 8, -13, 10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Maximum circular sum is %d\n",maxCircularSum(a, n));
    return 0;
}

