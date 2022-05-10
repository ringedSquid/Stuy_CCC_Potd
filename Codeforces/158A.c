#include <stdio.h>
int main(void) {
	int n, k, advance=0;
	scanf("%d %d", &n, &k);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i=0; i<n; i++) {
		if ((a[i] != 0) && (a[i] >= a[k-1])) {
			advance++;
		}
	}
	printf("%d", advance);
	return 0;
}


