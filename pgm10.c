#include <stdio.h>
int main(){
	int x, sum;
	for(x=1; x<=100; (x+=2)){ printf("%d\n", x); sum += x; }
	printf("%d", sum);
	return 0;
}