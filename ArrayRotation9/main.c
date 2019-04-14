#include <stdio.h>
#include <stdlib.h>

int check(int[],int);

int main()
{
    int arr[]={7, 9, 11, 12, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int no_of_rotation=check(arr,n);
    printf("Total number of rotation=%d\n",no_of_rotation);
    return 0;
}
int check(int arr[],int n)
{

int mid,high=n-1,low=0;
while(1)
{
    mid=(high+low)/2;
    if(arr[low]<=arr[high])
        return low;
    else if((arr[mid]<arr[mid-1])&&(arr[mid]<arr[mid-1]))
        return mid;
    else if(arr[mid]<arr[high])
            high=mid-1;
   else if(arr[mid]>arr[high])
    low=mid+1;
}
}
