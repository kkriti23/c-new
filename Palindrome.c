# include <stdio.h>
int main ()
{
	int n,a,reverse,b;
	b=n;
	reverse=0;
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		reverse=reverse*10+a;
		n=n/10;
	}
	if(reverse=b){
		printf("Palindrome");
	}else{
		printf("Not a Palindrome");
	}
}
