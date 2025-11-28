#include<stdio.h>
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int ncr=fact(i)/(fact(j)*fact(i-j));
            printf("%d ",ncr);
        }
    printf("\n");
    }
}