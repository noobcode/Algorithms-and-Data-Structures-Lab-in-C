#include <stdio.h>

/*
x -> z;
y -> x;
z -> y;
*/
void tswap(int* x, int*y, int* z){
	int tmp = *z;
	*z = *y;
	*y = *x;
	*x = tmp;
}

int main(){
	int a[3];
	
	scanf("%d\n%d\n%d", &a[0], &a[1], &a[2]);
	tswap(&a[0], &a[1], &a[2]);
	printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
	
	return 0;
}
