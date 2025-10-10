#include <stdio.h>
int main ()
{
	int a,n,i,factorial,strong=0;
	scanf("%d",&n);
	int b=n;
	while(n>0){
		a=n%10;
		for (i=1 ; i<a+1 ; i++ ){
        	factorial *= i ;    
        }
		strong = strong + factorial;
		factorial = 1;
		n=n/10;
	}
	// printf("%d",strong);
	if(strong==b){
		printf("strong no");
	}else{
		printf("Not a strong no");
	}
}
