#include<stdio.h>
#include<math.h>
    
isPrimePalindrome(int num){
    int isPalindrome(int n) {
    /* Your Code Here */
        int rem,rev=0;
        int a=n;
        while(a>0){
    	    rem=a%10;
    	    rev=rev*10+rem;
    	    a=a/10;
	    }
	    if(rev==n){
		    return 1;
	    }else{
		    return 0;
	    }
    }
    if(isPrime(num) && isPalindrome(num)){
    	return 1;
	}else{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isPrimePalindrome(num)){
		printf("isPrimePalindrome");
	}else{
		printf("not isPrimePalindrome");
	}
}
