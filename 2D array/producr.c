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
	int i,j,k,l,m,x,y;
	int pro[3][3];
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			pro[x][y]=0;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				pro[i][j]=pro[i][j]+a[i][k]*b[k][j];
			}
			printf("%d ",pro[i][j]);
	    }
		printf("\n");
	}
}
