#include <stdio.h> 
int main() {    
	char input;    
	printf("Character to convert: ");        
	scanf("%c",&input);    
	printf("Converted character: %c", input ^ 32);  
	return 0;  
	   }