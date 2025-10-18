# include <stdio.h>
int rev(int n){
	int remainder,reverse=0;
	while(n>0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	return n;
}
int main()
{
	int n,sq,t,q,r;
	scanf("%d",&n);
	sq=n*n;
	t=rev(sq);
	q=rev(n);
	r=q*q;
	if(r==t){
		printf("adam");
	}else{
		printf("not adam");
	}
}
