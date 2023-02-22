#include <stdio.h>
int main(void) {
	int n, x=0, y=0, z=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x1, y1, z1;
		scanf("%d %d %d", &x1, &y1, &z1);
		x += x1;
		y += y1;
		z += z1;;
		}
	if ((x == 0) && (y == 0) && (z == 0)) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}

