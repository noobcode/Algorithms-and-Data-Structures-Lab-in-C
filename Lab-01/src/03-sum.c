#include <stdio.h>

int main(){
	int sum = 0;
	int x;
	
	// read number sequence; add them
	do {
		scanf("%d", &x);
		sum += x;	
	} while(x != 0);
	
	printf("%d\n", sum);
	return 0;
}
