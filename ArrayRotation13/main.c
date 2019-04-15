//Find a rotation with maximum hamming distance
#include <stdio.h>
#include <stdlib.h>

int hamingDistance(int[],int);

int main()
{
    int arr[]={2,4,8,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int distance=hamingDistance(arr,n);
    printf("Hamming distance=%d",distance);
    return 0;
}

int hamingDistance(int arr[],int n)
{
    int maxHam=0;
    int brr[2*n],i,j,k;
    for(i=0;i<n;i++)
        brr[i]=arr[i];
    for(i=0;i<n;i++)
        brr[n+i]=arr[i];
    for(i=1;i<n;i++)
    {
        int curHam=0;
        for(j=i,k=0;j<(i+n);j++,k++)
            if(arr[k]!=brr[j])
            curHam++;
        if(curHam==n)
            return n;
        else if(maxHam<curHam)
            maxHam=curHam;
    }
    return maxHam;
}
