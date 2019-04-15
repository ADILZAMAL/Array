//Rearrange an array such that arr[i] = i

#include <stdio.h>
#include <stdlib.h>
void fix(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1&&arr[i]!=i)
          {
            int x=arr[arr[i]];
            arr[arr[i]]=arr[i];
            while(x!=-1&&x!=i)
             {
               int y=arr[x];
               arr[x]=x;
               x=y;
             }
           arr[i]=x;
           if(arr[i]!=i)
             arr[i]=-1;

         }

     }
}

int main()
{
    int A[] = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    int n=sizeof(A)/sizeof(A[0]);
    fix(A,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    return 0;
}
