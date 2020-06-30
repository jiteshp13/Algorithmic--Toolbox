#include<stdio.h>
#include<stdio.h>

int gcd(int a, int b)
{
	int temp;
	
	while( (b % a) != 0)
	{
		temp = b % a;
		b = a;
		a = temp;
	}
	return a;
}

int main() {
	unsigned long long int a, b;
	scanf("%lu %lu", &a, &b);
	
	if ( a<b) printf("%llu", (a * b) / gcd(a, b) );
	else printf("%llu", (a * b) / gcd(b, a) );
	
	return 0;
}
	
	