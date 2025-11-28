#include<stdio.h>
int main()
{
	int a[][3]={
	            {1,2,3},
				{4,5,6},
				{7,8,9}
			};
	int b[][3]={
	            {1,2,3},
				{4,5,6},
				{7,8,9}
			};
	int i,j;
	int sum[3][3];
	for(i=0;i<3;i++){   //rows
		for(j=0;j<3;j++){   //columns
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
