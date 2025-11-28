#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,m,x,y;
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
	}
	for(m=n-1;m>0;m--){
		printf("\n");
		for(x=1;x<=n-m;x++){
			printf(" ");
		}
		for(y=1;y<=2*m-1;y++){
			printf("*");
		}
	}
}
