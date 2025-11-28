#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,k,j,m;
	for(i=1;i<=n;i++){
		int a=1,b=i-1;
		for(j=n-i;j>=0;j--){
			printf(" ");
		}
		for(k=0;k<i;k++){
			printf("%d",a);
			a++;
		}
		for(m=0;m<i-1;m++){
			printf("%d",b);
			b--;
		}
		printf("\n");
	}
}
