#include <stdio.h>
int main(){

 	int z;

	printf("\t\tMenu ");    
	printf("\n-----------------------------------");    
	printf("\n1 - Microsoft Word");    
	printf("\n2 - Yahoo messenger");    
	printf("\n3 - AutoCAD");    
	printf("\n4 - Java Games");       
	printf("\n-----------------------------------");    

	printf("\nEnter your preference:");
	scanf("%d", &z);

	switch(z)
	{
	  case 1:
		printf("\nPersonal Computer Software");
		break;
	  case 2:
		printf("\nWeb Base Software");
		break;
	  case 3:
		printf("\nScientific Software");
		break;
	  case 4:
		printf("\nEmbeded Software");
		break;
	  default:
		printf("\nIncorrect input");
	}
	
	return 0;		
}