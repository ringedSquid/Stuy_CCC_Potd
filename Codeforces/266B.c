#include <stdio.h>
int main(void) {
	int n, t; scanf("%d %d", &n, &t);
	char a[n];
	for (int i=0; i<n; i++) {
		scanf(" %c", &a[i]);
	}
	for (int i=0; i<t; i++) {
		for (int y=0; y<=n; y++) {
			if ((a[y] == 'B') && (a[y+1] == 'G')) {
				a[y] = 'G';
				a[y+1] = 'B';
				y++;
			}
		}
	}
	for (int i=0; i<n; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}




		
