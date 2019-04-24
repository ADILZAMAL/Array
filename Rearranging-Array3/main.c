//Rearrange array such that arr[i] >= arr[j]
//if i is even and arr[i]<=arr[j] if i is odd and j < i

#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }

        }
    }
}
void rearrangeArray(int arr[],int n)
{
    int tempArr[n];
    int i,even,odd,j;
    for(i=0;i<n;i++)
     tempArr[i]=arr[i];
    sort(tempArr,n);
    even=n/2;
    odd=n-n/2;
    for(i=odd-1,j=0;i>=0;i--,j=j+2)
    {
       arr[j]=tempArr[i];
    }
    for(i=even,j=1;i>0;i--,j=j+2)
    {
        arr[j]=tempArr[odd];
        odd++;
    }
    }


int main()
{
    int arr[]={1, 2, 1, 4, 5, 6, 8, 8};
    int size=sizeof(arr)/sizeof(arr[0]);
    rearrangeArray(arr,size);
    int i;
    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
    return 0;
}
