# include <stdio.h>
int main ()
{
	int a,b,i,factor,j,factor1;
	scanf("%d%d",&a,&b);
	for(i=2;i<a;i++){
		factor=a%i;
		if(factor==0){
			printf("%d\t",i);
		}
	}
	for(j=2;j<b;j++){
		factor1=b%j;
		if(factor1==0){
			printf("%d\t",j);
		}
	}
}
