# include <stdio.h>
# include <math.h>
int main ()
{
	int n,num,remainder,a,result=0;
	scanf("%d",&n);
	num=n;
	while(num>0){
		num=num/10;
		a++;
	}
	num=n;
	while(num>0){
		remainder=num%10;
		result=result+pow(remainder,a);
		num=num/10;
	}
	if(result=n){
		printf("Armstrong");
	}else{
		printf("Not armstrong");
	}
}
