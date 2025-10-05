# include <stdio.h>
int main ()
{
    int i , n , product=1  ;
    scanf("%d",&n);
    for (i=1 ; i<n+1 ; i++ ){
        product *= i ;
        printf ("%d\n", product);
    }
}
