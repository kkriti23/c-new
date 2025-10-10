# include <stdio.h>
int main ()
{
	int num,i;
	scanf("%d",&num);
	for(i=2;i<num+1;i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
}
