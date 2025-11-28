#include<stdio.h>
int main()
{
	int a,b,lcm,max;
	scanf("%d%d",&a,&b);
	max = (a>b)? a:b ;
	while(max!=0){
		if(max%a==0&&max%b==0){
			lcm=max;
		}
		max++;
	}
	printf("lcm=%d",lcm);
}
