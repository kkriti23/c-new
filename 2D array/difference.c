#include<stdio.h>
int main()
{
	int a[][3]={
	            {32,62,36},
				{41,52,64},
				{77,88,39}
			};
	int b[][3]={
	            {1,2,3},
				{4,5,6},
				{7,8,9}
			};
	int i,j;
	int diff[3][3];
	for(i=0;i<3;i++){   //rows
		for(j=0;j<3;j++){   //columns
			diff[i][j]=a[i][j]-b[i][j];
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}
}
