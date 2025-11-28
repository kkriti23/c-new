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
    int n,r;
    scanf("%d%d",&n,&r);
    int ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}