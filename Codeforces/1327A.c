#include <stdio.h> //WTF THIS SHIT FAILED ON TEST CASE 20000000000 ;-;
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
