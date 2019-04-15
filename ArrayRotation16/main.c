#include <stdio.h>
#include <stdlib.h>
int findElement(int range[][2],int rotation,int index)
{
    int i;
    for(i=rotation-1;i>=0;i--)
    {
        if(index>=range[i][0]&&index<=range[i][1])
            {
                if(index==range[i][0])
                    index=range[i][1];
                else
                    index--;
            }
    }
return index;
}

int main()
{
   int arr[]={1,2,3,4,5};
   int index=1;
   int rotations=2;
   int range[][2]={{0,2},{0,3}};
   int number=findElement(range,rotations,index);
   printf("%d",arr[number]);
}
