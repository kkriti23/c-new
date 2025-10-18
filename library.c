# include <stdio.h>
int isAdams(int num) {
int sq,a,remain,reverse=0,b,remain1,reverse1=0,sq1,isAdam;
	sq=num*num;
	while(sq>0){
		remain=sq%10;
		reverse=reverse*10+remain;
		sq=sq/10;
	}
	num=a;
	while(num>0){
		remain1=num%10;
		reverse1=reverse1*10+remain1;
		num=num/10;
	}
	sq1=reverse1*reverse1;
	if(sq1==a){
		return 1 ;
	}else{
		return 0 ;
	}
}
int main (){
	int num;
	scanf("%d",&num);
	if(isAdams(num)){
		printf("Adam");
	}else{
		printf("Not Adam");
	}
}
