#include <stdio.h>

# define MAXN 10000

void read_array(int* a, int* n);
void invert_array_in_loco(int* a, int n);
void swap(int* a, int* b);
void print_array(int* a, int n);

int main(){
	int n; 			// array length
	int a[MAXN];
	
	read_array(a, &n);
	invert_array_in_loco(a, n);
	print_array(a, n);
	
	return 0;
}

void read_array(int* a, int* n){
	scanf("%d", n);			// number of array elements
	
	for(int i=0; i < *n; i++)	
		scanf("%d", &(a[i]));
}

void invert_array_in_loco(int* a, int n){
	int forward_index = 0;
	int backward_index = n-1;
	
	while(backward_index > forward_index){
		swap(&a[forward_index], &a[backward_index]);
		forward_index++;
		backward_index--;
	}
}

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(int* a, int n){
	for(int i=0; i < n; i++)
		printf("%d\n", a[i]);
	printf("\n");
}
