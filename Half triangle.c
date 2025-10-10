# include <stdio.h>
int main ()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
	    }
	    for(k=1;k<i+1;k++){
	    	printf("*");
	    }
	printf("\n");
	}
}
