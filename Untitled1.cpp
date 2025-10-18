#include<stdio.h>
#include<math.h>
Place "#Cp" in Anywhere in the comment section of program.
// Function to reverse digits of a number
int reverseDigits(int n) {
    int reverse,rem;
    while(n>0){
    	rem=n%10;
    	reverse=reverse*10+rem;
    	n=n/10;
	}
	return reverse;
}
// Function to check if number is Armstrong
int isArmstrong(int num) {
    int n,remainder,a,result=0;
	num=n;
	while(num>0){
		num=num/10;
		a++;
	}
	num=n;
	while(num>0){
		remainder=num%10;
		result=result+pow(remainder,a);
		num=num/10;
	}
	if(result==n){
		return 1;
	}else{
		return 0;
	}
}
// Function to check if number is Adams Number
int isAdams(int num) {
int sq,a,remain,reverse=0,b,remain1,reverse1=0,sq1;
	sq=num*num;
	while(sq>0){
		remain=sq%10;
		reverse=reverse*10+remain;
		sq=sq/10;
	}
	while(num>0){
		remain1=num%10;
		reverse1=reverse1*10+remain1;
		num=num/10;
	}
	sq1=reverse1*reverse1;
	if(sq1==reverse){
		return 1;
	}else{
		return 0;
	}
}
// Function to check if number is prime
int isPrime(int num) {
    
}
// Function to check if number is prime and palindrome
int isPrimePalindrome(int num) {
/* Your Code Here */
}
// Main menu-driven program
int main() {
int choice, num;
do {
printf("\n===== MENU =====\n");
printf("1. Check Armstrong Number\n");
printf("2. Check Adams Number\n");
printf("3. Check Prime Palindrome Number\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 4) {
printf("Exiting program. Goodbye!\n");
break;
}
printf("Enter a number: ");
scanf("%d", &num);
switch (choice) {
case 1:
if (isArmstrong(num))
printf("%d is an Armstrong number.\n", num);
else
printf("%d is NOT an Armstrong number.\n", num);
break;
case 2:
if (isAdams(num))
printf("%d is an Adams number.\n", num);
else
printf("%d is NOT an Adams number.\n", num);
break;
case 3:
if (isPrimePalindrome(num))
printf("%d is a Prime Palindrome number.\n", num);
else
printf("%d is NOT a Prime Palindrome number.\n", num);
break;
default:
printf("Invalid choice! Please select between 1–4.\n");
}
} while (choice != 4);
return 0;

