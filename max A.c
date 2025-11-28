#include<stdio.h>
int main ()
{
    int arr[5]={1,2,3,8,5};
    int i,max=0;
    for(i=0;i<5;i++){
        if(arr[i]>arr[max]);
        max=i;
    }
    printf("%d",arr[max]);
}
