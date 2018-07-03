#include <stdio.h>
int main(){
	int num1, num2, sum; 
	sum=0; 

	printf("Enter first number: ");    
	scanf("%d", &num1); 

	printf("Enter second number: ");    
	scanf("%d", &num2);

	for(; num1 <= num2; num1++) {  sum += num1; }
	
	printf("Total : %d", sum); 
	return 0;
}

 
 
 
