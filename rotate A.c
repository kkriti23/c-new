// to rotate
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int k,ind=-1;
    scanf("%d",&k);
    int i,j,l,m;
    for(j=0;j<5;j++){
        if(j==k){
           ind=j; 
        }
    }
    if(ind>=0){
        for(l=0;l<ind;l++){
            for(i=0;i<4;i++){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
            }
        }
    }
    for(m=0;m<5;m++){
        printf("%d",arr[m]);
    }
}
