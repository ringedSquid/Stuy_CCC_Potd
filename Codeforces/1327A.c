#include <stdio.h>
int main(void) {
	int t, n, k;
	scanf("%d", &t);
	for (int x = 0; x < t; x++) {
		scanf("%d%d", &n, &k);
		if ((k*k) <= n && k % 2 == n % 2) {
			printf("\nYES");
		}
		else {
			printf("\nNO");
		}
	}
	return 0;
}
