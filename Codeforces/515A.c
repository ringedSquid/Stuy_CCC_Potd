#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, s, min_d;
	scanf("%d%d%d", &a, &b, &s);
	min_d = abs(a) + abs(b);
	if ((s - min_d) % 2 == 0 && s >= min_d) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	
	return 0;
}
