#include <stdio.h>

int main(void) {
	int x, y, tc;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%d%d", &x, &y);
		if (x > 3) {
			printf("YES\n");
		}
		else if (x == 1) {
			if (y == 1) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else {
			if (y < 4) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
