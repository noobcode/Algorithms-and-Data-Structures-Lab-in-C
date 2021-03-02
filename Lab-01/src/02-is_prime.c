#include <stdio.h>
#include <math.h>

/*
return 1 if x is prime
return 0 if x is non prime
*/
int is_prime(int x){
	if (x <= 1) 
		return 1;
		
	for(int i = 2; i <= ceil(sqrt(x)); i++){
		if(x % i == 0)
			return 0;
	}
	
	return 1;
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%d\n", is_prime(x));
	
	return 0;
}
