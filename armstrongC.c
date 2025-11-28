# include <stdio.h>
# include <math.h>
int main ()
{
	int n,num,num1,remainder,a,result=0;
	scanf("%d",&n);
	num=n;
	while(num>0){
		num=num/10;
		a++;
	}
	num1=n;
	while(num1>0){
		remainder=num1%10;
		result=result+pow(remainder,a);
		num1=num1/10;
	}
	if(result==n){
		printf("Armstrong");
	}else{
		printf("Not armstrong");
	}
}
