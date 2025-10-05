# include <stdio.h>
int main ()
{
	int Year;
	scanf("%d",&year);
	
	if((Year%4==0) && (Year%100!=0) || (year%400==0)){
		printf("leap year");
	}else{
		printf("not a leap year");
	}
}
