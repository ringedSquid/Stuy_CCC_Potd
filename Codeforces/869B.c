#include <stdio.h>
 
int main(void) {
	long long a, b, ab;
	scanf("%lld%lld", &a, &b);
	if (b - a == 1) {
		printf("%d", b%10);
		return 0;
	}
	if (b == a) {
		printf("1");
		return 0;
	}
	ab = b % 10;
	for (long long x = b - 1; x > a; x--) {
		ab *= x%10;
		ab %= 10;
		if (ab == 0) {
			printf("0");
			break;
		}
	}
	if (ab != 0) {
		printf("%lld", ab);
	}

	return 0;




	

}
 
