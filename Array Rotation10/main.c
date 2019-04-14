#include <stdio.h>
#include <stdlib.h>
void circularRotate(int[],int);
void print(int[],int);
int main()
{
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element:");
    int i,k;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter how many times you want to left rotate array:");
    scanf("%d",&k);
    k=k%n;
    for(i=0;i<k;i++)
        circularRotate(arr,n);
    print(arr,n);
    return 0;
}

void circularRotate(int arr[],int n)
{

    int temp=arr[0],i;
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[i]=temp;

}
void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
