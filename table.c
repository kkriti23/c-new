# include <stdio.h>
int main ()
{
	int n,i,pro;
	scanf("%d",&n);
	
	for(i=1;i<11;i++){
		pro = i * n;
		printf("%d * %d = %d\n",n,i,pro);
	}
}
