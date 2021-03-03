#include <stdio.h>

void minmax(int* a, int n, int* argmin, int* argmax){
	*argmin = *argmax = 0;
	for(int i=0; i < n; i++)
		if(a[i] < a[*argmin])		*argmin = i;
		else if (a[i] > a[*argmax]) *argmax = i;
}

int main(){
	int argmin, argmax;
	int n = 10;  // number of numbers to read
	int a[n];
	
	for(int i=0; i < n; i++)
		scanf("%d", &a[i]);
	
	minmax(a,n, &argmin, &argmax);
	printf("%d\n%d\n%d\n%d\n", argmin, a[argmin], argmax, a[argmax]);
	
	return 0;
}
