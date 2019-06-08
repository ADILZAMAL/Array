#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    return (a>b?a:b);
}
void nextGreatest(int arr[],int n)
{
    int i,tempRightMax=arr[n-1],temp;
    arr[n-1]=-1;
    for(i=n-2;i>=0;i--)
    {
        temp=arr[i];
        arr[i]=tempRightMax;
        tempRightMax=max(tempRightMax,temp);
    }

}
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int arr[] = {16, 17, 4, 3, 5, 2};
  int size = sizeof(arr)/sizeof(arr[0]);
  nextGreatest (arr, size);
  printf ("The modified array is: \n");
  printArray (arr, size);
  return (0);
}
