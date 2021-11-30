#include <stdio.h>
//numbers that are results of x^2 are not valid
//numbers below 3 are not valid
int pow2(long long n) {
	while (n != 1) {
		if (n%2 != 0) {
			return 1;
		}
		n = n/2;
	}
	return 0;
}

int main(void) {
	int t;
	long long n;
	scanf("%d", &t);
	for (int x=0; x<t; x++) {
		scanf("%lld", &n);
		if ((pow2(n) == 1) && (n > 2)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
