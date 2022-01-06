#include <stdio.h>
int main(void) {
	int t, a, b, steps, ls, n;
	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d %d", &a, &b);
		ls = a+10;
		for (int y=(b<2 ? 1:0); y<30; y++) {
			steps = y;
			n = a;
			while (n != 0) {
				steps++;
				n /= (b+y);
			}
			if (steps < ls) {ls = steps;}
		}
		printf("%d\n", ls);
	}
	return 0;
}



