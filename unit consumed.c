# include <stdio.h>
int main ()
{
	int unit;
	float price,finalprice;
	scanf("%d",&unit);
	if(unit<=100){
		price=unit*1.50;
	}else if(unit>100&&unit<=200){
		price=(100*1.50)+(unit-100)*2.50;
	}else if(unit>200&&unit<=300){
		price=(100*1.50)+(100*2.50)+(unit-200)*4.00;
	}else{
		price=(100*1.50)+(100*2.50)+(100*4.00)+(unit-300)*5.00;
	}
	if(price>1000){
		finalprice=price+price*0.9;
	}else{
		finalprice=price;
	}
	printf("%.02f",finalprice);
}
