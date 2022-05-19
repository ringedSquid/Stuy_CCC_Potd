#include <stdio.h>
int min(int a, int b) {
	return (a<b) ? a : b;
}
int max(int a, int b) {
	return (a>b) ? a : b;
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		int l1, r1, l2, r2, size=0;
		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
		size += max(l1, l2);
		if ((size > r1) || (size > r2)) {
			size += min(l1, l2);
		}
		printf("%d\n", size);
	}
	return 0;
}


		
