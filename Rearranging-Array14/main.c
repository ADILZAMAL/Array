#include <stdio.h>
#include <stdlib.h>
void RightCircularRotate(int arr[],int outoforder,int index)
{
    int i,temp=arr[index];
    for(i=index;i>outoforder;i--)
        arr[i]=arr[i-1];
    arr[i]=temp;

}
void RearrangePosNeg(int arr[],int n)
{
    int i,outoforder=-1;
    for(i=0;i<n;i++)
    {

        if(outoforder==-1)
        {
            if(arr[i]>=0)
                outoforder=i;
        }
        else
        {
            if(arr[i]<0)
               {
                RightCircularRotate(arr,outoforder,i);
                if(i-outoforder>=1)
                outoforder+=1;
               }

        }
    }

}
int main()
{
 int arr[] = {12,11,-13,-5,6,-7,5,-3,-6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    RearrangePosNeg(arr, n);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
