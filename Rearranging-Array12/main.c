//Double the first element and move zero to end

#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void modifyArr(int arr[],int n)
{
    int i,outofindex=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[i]*=2;
            arr[i+1]=0;
        }
    }
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
                  swap(&arr[outofindex],&arr[i]);
                  if(i-outofindex>=2)
                    outofindex+=1;
                  else
                    outofindex=i;
                }
        }
    }


}



int main()
{
    int arr[] = { 0, 2, 2, 2, 0, 6, 6, 0, 0, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    modifyArr(arr,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
