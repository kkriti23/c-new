# include <stdio.h>
int main ()
{
	int n,a,b,cube,armstrong=0;
	scanf("%d",&n);
	b=n;
	while(n!=0){
		a=n%10;
		cube=a*a*a;
		armstrong=armstrong+cube;
		n=n/10;
	}if(armstrong==b){
		printf("Armstrong No.");
	}else{
		printf("Not Armstrong No.");
	}
}
