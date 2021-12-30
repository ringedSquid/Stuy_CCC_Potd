#include <stdio.h>
#include <string.h>
int main(void) {
	FILE *input;
	FILE *output;
	input = fopen("breedflip.in", "r");
	output = fopen("breedflip.out", "w");
	int n, min_times=0;
	fscanf(input, "%d", &n);
	char a[n], b[n];
	int f[n+1];
	memset(f, 0, sizeof(f));
	for (int i=0; i<n; i++) {
		fscanf(input, " %c", &a[i]);
	}
	for (int i=0; i<n; i++) {
		fscanf(input, " %c", &b[i]);
	}
	for (int i=0; i<n; i++) {
		if (a[i] != b[i]) {
			f[i] = 1;
		}
	}
	for (int i=0; i<n; i++) {
		if ((f[i] == 1) && (f[i+1] == 0)) {
			min_times++;
		}
	}
	fprintf(output, "%d\n", min_times);	
	return 0;
}
	

