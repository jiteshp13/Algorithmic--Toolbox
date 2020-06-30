#include<stdio.h>
int main() {
	
	int n;
	scanf("%d", &n);
	unsigned long int arr_fib[n];
	
	arr_fib[0]=0;
	arr_fib[1]=1;
	
	for(int i=2; i<=n; i++) {
		arr_fib[i] = arr_fib[i-1] + arr_fib[i-2];
	}
	
	unsigned long int sum=0;
	for(int i=1; i<=n; i++) {
		sum += arr_fib[i];
	}
	if(sum>10) printf("%d\n", sum%10);
	else if(sum<10) printf("%d\n", sum);
	return 0;
}
		
