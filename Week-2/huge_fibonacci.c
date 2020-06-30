#include<stdio.h>
int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	unsigned long int arr_fib[n];
	
	arr_fib[0]=0;
	arr_fib[1]=1;
	
	for(int i=2; i<=n; i++) {
		arr_fib[i] = arr_fib[i-1] + arr_fib[i-2];
	}
	printf("%d", arr_fib[n] % m);
	return 0;
}
		
