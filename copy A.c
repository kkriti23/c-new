#include<stdio.h>
int main()
{
	int i,j;
	int arr[]={1,2,3,4,5};
	int len=sizeof(arr)/sizeof(arr[0]);
	int b[len];
	for(i=0;i<len;i++){
		b[i]=arr[i];
	}
	for(j=0;j<len;j++){
		printf("%d ",b[j]);
	}
}
