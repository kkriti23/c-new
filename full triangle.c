# include <stdio.h>
int main ()
{
	int i,j,k,n,l,m;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
	    }
	    for(m=1;m<=2*i-1;m++){
	    	printf("*");
	    }
	printf("\n");
	}
}
