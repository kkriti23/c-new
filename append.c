#include<stdio.h>
int main()
{
	char a[50]="Kriti";
	char b[50]=" Agarwal";
	
	int i=0;
	while(a[i]!='/0'){
		i++;
	}int j=0;
	while(b[j]!='/0'){
		a[i]=b[j];
		i++;
		j++;
	}
	printf("%s",a);
}
