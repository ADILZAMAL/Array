#include <stdio.h>
#include <stdlib.h>
void rightcircularotation(int arr[],int outofindex,int index)
{
    int i,temp=arr[index];
    for(i=index;i>outofindex;i--)
        arr[i]=arr[i-1];
    arr[i]=temp;
}
void rearrangearr(int arr[],int n)
{
    int i,outofindex=-1;
    for(i=0;i<n;i++)
    {
        if(outofindex==-1)
        {
            if(arr[i]<0)
                outofindex=i;
        }
        else
        {
            if(arr[i]>=0)
            {
                rightcircularotation(arr,outofindex,i);
                outofindex++;
            }
        }
    }
}

int main()
{

    int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
  rearrangearr(arr,n);
  int i;
  for(i=0;i<n;i++)
    printf("%d\t",arr[i]);

}
