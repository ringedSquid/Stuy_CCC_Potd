#include <stdio.h>
int max(int a, int b) {
	return (a > b) ? a : b;
}

int main(void) {
	int x1, y1, buffer;
	for (int i=1; i<=5; i++) {
		for (int n=1; n<=5; n++) {
			scanf("%d", &buffer);
			if (buffer == 1) {
				x1 = n;
				y1 = i;
			}
		}
	}
	printf("%d", max(x1-3, 3-x1)+max(y1-3, 3-y1));
	return 0;
}
	

