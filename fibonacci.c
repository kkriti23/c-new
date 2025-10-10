# include <stdio.h>
int main ()
{
	int a,b,c,i,n;
	a=0;
	b=1;
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
