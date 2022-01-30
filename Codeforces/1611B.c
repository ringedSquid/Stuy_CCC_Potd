#include <stdio.h>
//Maximum amount possible (x) = (a + b) / 4
//Maximum amount possible (y) = min(a, b)
//max groups = max(x, y) - (max(x, y) - min(x, y))
int min(int a, int b) {
	return (a > b) ? b : a;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
int main(void) {
	int t, a, b, x, y;
	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d %d", &a, &b);
		x = (a + b)/4;
		y = min(a, b);
		printf("%d\n", (max(x, y) - (max(x, y) - min(x, y))));
	}
	return 0;
}
	
		




