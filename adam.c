# include <stdio.h>
int main ()
{
	int num,sq,a,remain,reverse=0,b,remain1,reverse1=0,sq1;
	scanf("%d",&num);
	sq=num*num;
	while(sq>0){
		remain=sq%10;
		reverse=reverse*10+remain;
		sq=sq/10;
	}
	printf("reverse:%d\n",reverse);
	while(num>0){
		remain1=num%10;
		reverse1=reverse1*10+remain1;
		num=num/10;
	}
	printf("reverse1:%d\n",reverse1);
	sq1=reverse1*reverse1;
	if(sq1==reverse){
		printf("Adam");
	}else{
		printf("Not adam");
	}
	
}
