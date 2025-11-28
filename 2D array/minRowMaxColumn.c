#include<stdio.h>
maxRow(int a[][] ,int i, int n){
        for(int j=0;j<n;j++){
            int max=0;
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        return max ;
}
maxCOlumn(int a[][] ,int j, int n){
        for(int i=0;i<n;i++){
            int max=0;
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        return max ;
    }
int main()
{
    
	int a[][3]={
	            {1,2,3},
				{4,5,6},
				{7,8,9}
	};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
        }
    }
}