# include <stdio.h>
int main()
{
	char ch,newch;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
		if(ch=='z'){
			printf("a");
		}else{
		    newch=ch+1;
		    printf("%c",newch);
		}
	}if(ch>='A'&&ch<='Z'){
		if(ch=='Z'){
			printf("A");
		}else{
		    newch=ch+1;
		    printf("%c",newch);
		}
	}
	
	
}
