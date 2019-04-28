#include <stdio.h>
#include <stdlib.h>
void rightrotate(int arr[],int n,int outofplace,int index)
{
    int temp=arr[index];
    int i;
    for(i=index;i>outofplace;i--)
        arr[i]=arr[i-1];
    arr[i]=temp;
}

void rearrange(int arr[],int n)
{
    int outofindex=-1,index;
    for(index=0;index<n;index++)
    {

        if(outofindex>=0)
        {
           if(((arr[index]>=0)&&(arr[outofindex]<0))||((arr[index]<0)&&(arr[outofindex]>=0)))
           {
                 rightrotate(arr,n,outofindex,index);
           if(index-outofindex>2)
            outofindex=outofindex+2;
           else
            outofindex=-1;

           }
        }

        if(outofindex== -1)
        {
            if(((arr[index]>=0)&&((index+1)%2!=0))||((arr[index]<0)&&(index+1)%2==0))
            {
                outofindex=index;
            }
        }
    }
}

int main()
{
  int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
  int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
