#include <stdio.h>
#include <string.h>
int main(void) {
	int n, buffer, count=0;
	scanf("%d", &n);
	int ordered[n+1];
	memset(ordered, 0, sizeof(ordered));
	for (int i=0; i<n; i++) {
		scanf("%d", &buffer);
		if (ordered[buffer-1]==0) {
			count++;
		}
		ordered[buffer]=1;
	}
	printf("%d\n", count);
	return 0;
}
