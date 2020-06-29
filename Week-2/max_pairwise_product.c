#include<stdio.h>

unsigned long max_product(int n, unsigned long arr[]) {
	unsigned long max_1 = 0, max_2 = 0;
	int	x;
	for(int i=0; i<n; i++) {
		if( max_1 < arr[i] ) {
			max_1 = arr[i];
			x = i;
		}
	}
	for(int j=0; j<n; j++) {
		if (max_2 < arr[j] && (x != j) ) max_2 = arr[j];	
	}
	return max_1 * max_2;
}

int main() {
	int n;
	scanf("%d", &n);
	unsigned long arr[n];
	for(int i=0; i<n; i++) {
		scanf("%lu", &arr[i]);
	}
	printf("%lu", max_product(n, arr) );
	return 0;
}	
