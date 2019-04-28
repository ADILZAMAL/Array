//Move all the zero to the end

#include <stdio.h>
#include <stdlib.h>
void rightRotate(int arr[],int outofindex,int index)
{
 int temp=arr[index],i;
 for(i=index;i>outofindex;i--)
    arr[i]=arr[i-1];
 arr[i]=temp;
}

void moveZero(int arr[],int n)
{
    int outofindex=-1;
    int i;
    for(i=0;i<n;i++)
    {
        if(outofindex==-1)
        {
           if(arr[i]==0)
            outofindex=i;
        }
        else
        {
            if(arr[i]>0)
               {
                 rightRotate(arr,outofindex,i);
                 if(i-outofindex>=2)
                 outofindex+=1;
               }
        }

    }
}
int main()
{

    int arr[] = {1, 2, 0, 0, 0, 3, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    moveZero(arr,size);
    int i;
    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
}
