#include<stdio.h>
int main()
{
	int arr[5]={5,4,3,2,1};
	int i,temp,j,k;
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
    		if(arr[i]>arr[i+1]){
	    	temp=arr[i];
	    	arr[i]=arr[i+1];
		    arr[i+1]=temp;	
		    }
	    }
	}
	for(k=0;k<5;k++){
		printf("%d",arr[k]);
	}
	
}
