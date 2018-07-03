#include <stdio.h>
int main(){

 	int z;
	float w, x, y;

	printf("\nEnter number 1:");
	scanf("%f", &x); 

	printf("\nEnter number 2:");
	scanf("%f", &y);

	printf("\t\tMathematical Operation ");    
	printf("\n-----------------------------------");    
	printf("\n1 - Add");    
	printf("\n2 - Subtract");    
	printf("\n3 - Multiply");    
	printf("\n4 - Divide");       
	printf("\n-----------------------------------");    

	printf("\nEnter your preference:");
	scanf("%d", &z);

	switch(z)
	{
	  case 1:
		w = x+y;
		printf("\nAnswer: %.2f",w);
		break;
	  case 2:
		w = x-y;
		printf("\nAnswer: %.2f",w);
		break;
	  case 3:
		w = x*y;
		printf("\nAnswer: %.2f",w);
		break;
	  case 4:
		w = x/y;
		printf("\nAnswer: %.2f",w);
		break;
	  default:
		printf("\nIncorrect input");
	}
	
	return 0;		
}