
#include<stdio.h>
#include<math.h>
int isPrime(int num) {
/* Your Code Here */
    int count=0,i;
    if(num<2){
    	return 0;
	}
	for(i=2;i<=num;i++){
		if(num%i==0){
			count++;
		}	
	}
	if(count>2){
		return 0;
	}else{
		return 1;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isPrime(num)){
		printf("isPrime");
	}else{
		printf("not isPrime");
	}
}
