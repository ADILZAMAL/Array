//Queries on Left and Right Circular shift on array
//******************Code is wrong*******Not valid for all the test case

#include <stdio.h>
#include <stdlib.h>
void doPreSum(int preSum[],int a[],int n)
{
    int i;
    preSum[0]=0;
    for(i=1;i<(n+1);i++)
        preSum[i]=preSum[i-1]+a[i-1];
}
int result(int preSum[],int r,int l,int rotation,int n)
{
    rotation%=n;
    l=(l+rotation)%(n+1);
    r=(r+rotation)%(n+1);
    if(l>=r)
    return preSum[l]-preSum[r-1];
    else
        return preSum[n]-preSum[r-1]-preSum[l+1] ;
}
int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(a[0]);
      int preSum[n+1],rotation=0;
    doPreSum(preSum,a,n+1);
    int i;
    int query1[] = { 1, 3 };
    rotation+=3;
    int query2[] = { 3, 0, 2 };
    printf("sum=%d\n",result(preSum,0,2,rotation,n));
    int query3[] = { 2, 1 };
    rotation-=1;
    int query4[] = { 3, 1, 4 };
      printf("sum=%d\n",result(preSum,1,4,rotation,n));



}
