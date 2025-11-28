#include<stdio.h>
int main()
{
	char a[3][3]={
	            {'k','l','m'},
				{'a','b','c'},
				{'x','y','z'}
			};
	int i,j;
	for(i=0;i<3;i++){
		for(j=2;j>=0;j--){
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	
}
