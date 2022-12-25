#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long k, a, b, c, d;
	scanf("%ld", &k);
	scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
	if ((a * k + b) == (c * k + d))
		printf("Yes %ld\n", a * k + b);
	else
		printf("No\n");

	return 0;
}