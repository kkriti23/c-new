#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i,n,k,ind=-1;;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(arr[i]==n){
            ind=i;
        }
    }
    if(ind>=0){
    	for(i=ind;i<4;i++){
    		int temp=arr[i];
    		arr[i]=arr[i+1];
		    arr[i+1]=temp;
		}
	}
	arr[4]=0;
	
	for(k=0;k<5;k++){
		printf("%d",arr[k]);
	}
}
