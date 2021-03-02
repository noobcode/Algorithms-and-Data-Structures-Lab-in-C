#include <stdio.h>

/* Computes the sum of the first n odd numbers (recursively) */
int f(int n){
	if(n == 0) return 0;
	else return 2*n - 1 + f(n-1);
}	
	
int main(){
	int x;
	
	scanf("%d", &x);
	printf("%d\n", f(x));
	return 0;
}


