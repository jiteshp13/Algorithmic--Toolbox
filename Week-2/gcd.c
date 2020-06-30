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
	unsigned long int a, b, result;
	
	scanf("%lu %lu", &a, &b);
	
	if( a < b ) printf("%lu",gcd(a, b));
	else printf("%lu",gcd(b, a));
	
	return 0;
	
}


