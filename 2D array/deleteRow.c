#include<stdio.h>
int main()
{
    int a[][3]={
	            {1,2,3},
				{4,5,6},
				{7,8,9}
			};
    int row;
    scanf("%d",&row);
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
            if(i==row){
                a[i][j]=0;
            }
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}