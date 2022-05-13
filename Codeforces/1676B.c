#include <stdio.h>
int min(int a[], int size) {
	int min = a[0];
	for (int i=0; i<size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
int main(void) {
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		int n, o, eat=0;
		scanf("%d", &n);
		int a[n];
		for (int y=0; y<n; y++) {
			scanf("%d", &a[y]);
		}
		o = min(a, n);
		for (int y=0; y<n; y++) {
			eat += a[y] - o;
		}
		printf("%d\n", eat);
	}
	return 0;
}

