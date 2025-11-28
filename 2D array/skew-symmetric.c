#include<stdio.h>
int main()
{
    int a[][3]={
	            {0,2,3},
				{-2,0,-8},
				{-3,8,0}
			};
    int count=0;
    for(int i=0;i<3;i++){  
		for(int j=0;j<3;j++){
            if(a[j][i]!=-a[i][j]){
                count++;
            }
        }
    }
    if(count!=0){
        printf("NOT Skew Symmetric");
    }else{
        printf("Skew summetric");
    }
}