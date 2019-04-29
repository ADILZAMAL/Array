#include <stdio.h>
#include <stdlib.h>
void rearrangearr(int arr[],int n)
{
    int arr1[n],i;
    for(i=0;i<n;i++)
    {
        arr1[arr[i]]=i;
    }
    for(i=0;i<n;i++)
        arr[i]=arr1[i];
}

int main()
{
     int arr[] = {1, 3, 0, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrangearr(arr,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
