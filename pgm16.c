#include <stdio.h>
int main(){
	int x, y;    
	printf("Enter value of x :"); 
	scanf("%d", &x);

	y = x > 50 ? 1 : 2 ;
	printf("Value of y : %d", y);    
	return 0; 
}