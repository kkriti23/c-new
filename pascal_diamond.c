#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,k,j,m,l,x,y,z;
	for(i=1;i<=n;i++){
		int a=1,b=i-1;
		for(j=n-i;j>0;j--){
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
	for(l=n-1;l>0;l--){
		int e=1,f=l-1;
		for(x=1;x<=n-l;x++){
			printf(" ");
		}
		for(y=1;y<l+1;y++){
			printf("%d",e);
			e++;
		}
		for(z=1;z<=l-1;z++){
			printf("%d",f);
			f--;
		}
		printf("\n");
	}
}
