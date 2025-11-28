#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int pro=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                pro=pro*arr[i][j];
            }
        }
    }
    printf("%d",pro);
}