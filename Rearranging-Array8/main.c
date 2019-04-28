#include <stdio.h>
#include <stdlib.h>
int swapFromBack(int arr[],int n,int k)
{
    int temp1=0,temp2=0,a,b;
    for(a=0,b=n-1;a<=b;)
    {
        if(arr[a]>k)
        {
            if(arr[b]<=k)
               {
                 temp1++;
                 b--;
               }
            else
                b--;
        }
        else a++;

    }
    for(b=n-1,a=0;b>=a;)
    {
        if(arr[b]>k)
        {
            if(arr[a]<=k)
               {
                 temp2++;
                 a++;
               }
            else
                a++;
        }
        else b--;
    }
    if(temp1>temp2)
        return temp2;
    else
        return temp1;

}
int main()
{
    int arr[] = {2, 7, 9, 5, 8, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    int temp=swapFromBack(arr,n,k);
    printf("Minimum number of swap = %d",temp);

}
