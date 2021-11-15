#include <stdio.h>
int main(void) {
	int test_cases;
	scanf("%d", &test_cases);
	int euclid_gcd(int a, int b) {
		int x;
		while ( b != 0) {
			x = a;
			a = b;
			b = x % a; //because a = b (what used to be b)//
		}
		return a;
	}	
	for ( int x = 0; x<test_cases; x++ ) {
		int a, b;
		scanf("\n%d", &a);
		scanf("\n%d", &b);
		if (euclid_gcd(a, b) == 1) {
			printf("\nfinite");
		}
		else {
			printf("\ninfinite");
		}
	}	
	return 0;
}
