#include <stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	
	scanf("%d\n%d", &a, &b);
	swap(&a, &b);
	printf("%d\n%d\n\n", a, b);
	
	return 0;
}
