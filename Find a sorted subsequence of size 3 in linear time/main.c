#include <stdio.h>
#include <stdlib.h>
void find3Numbers(int arr[],int n)
{
    int min=0;
    int max=n-1;
    int i;
    int smaller[n];
    smaller[0]=-1;
    for(i=1;i<n;i++)
    {
        if(arr[i]<=arr[min])
        {
            smaller[i]=-1;
            min=i;
        }
        else
            smaller[i]=min;

    }
    int grater[n];
    grater[n-1]=-1;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[max])
            grater[i]=max;
        else
        {
            grater[i]=-1;
            max=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(grater[i]!=-1&&smaller[i]!=-1)
            printf("%d\t%d\t%d",arr[smaller[i]],arr[i],arr[grater[i]]);
    }

}

int main()
{
    int arr[] = {12, 11, 10, 5, 6, 2, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    find3Numbers(arr, n);
    return 0;
}
