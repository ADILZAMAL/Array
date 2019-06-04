#include <stdio.h>
#include <stdlib.h>
int lbs(int arr[],int n){
int i,j,result=1,temp1=1;
int temp[n];
int index[n];
index[0]=0;             //temporary increasing array for storing the length of all the possible
for(i=0;i<n;i++)         //increasing subsequence
{
    temp[i]=1;
    for(j=0;j<i;j++)
    {
        if(arr[j]<arr[i])
            {
                if(result-1<=temp[j])
                   {
                     result=temp[j]+1;
                    index[i]=j;
                   }
            }
    }

    temp[i]=result;
    result=1;
    if(temp1<temp[i])
        temp1=temp[i];

}
for(i=0;i<n;i++)
if(temp[i]==temp1)
break;

void rec(int i){
    if(i==index[i])
    {
     printf("%d\t",arr[i]);
     return;
    }
rec(index[i]);
printf("%d\t",arr[i]);
}
rec(i);
return temp1;
}

int main()
{

  int arr[] = {0,4,12,2,10,6,9,13,3,11,7,15};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Length of longest increasing subsequence is %d\n", lbs( arr, n ) );
  return 0;
}
