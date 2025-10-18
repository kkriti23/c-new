//discount
# include <stdio.h>
int main ()
{
	float book1,book2,book3,totalprice,discount,finalprice;
	scanf("%f%f%f",&book1,&book2,&book3);
	printf("Price of book 1:%.2f\n",book1);
	printf("Price of book 2:%.2f\n",book2);
	printf("Price of book 3:%.2f\n",book3);
	totalprice=book1+book2+book3;
	printf("total price%.2f\n",totalprice);
	if(totalprice>500){
		discount=totalprice*.1;
		printf("discount:%.2f\n",discount);
	}
	finalprice=totalprice-discount;
	printf("final price:%.2f\n",finalprice);
	
}
