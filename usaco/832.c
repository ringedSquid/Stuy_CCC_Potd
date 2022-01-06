#include <stdio.h>
#include <string.h>
int inarray(int arr[], int size, int n) {
	for (int i=0; i<size; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	FILE *input;
	FILE *output;
	input = fopen("milkorder.in", "r");
	output = fopen("milkorder.out", "w");
	int n, m, k;
	fscanf(input, "%d %d %d", &n, &m, &k);
	int cows[n], ranks[m];
	memset(cows, 0, sizeof(cows));
	for (int i=0; i<m; i++) {fscanf(input, "%d", &ranks[i]);}
	for (int i=0; i<k; i++) {
		int value, index; 
		fscanf(input, "%d %d", &value, &index);
		cows[index-1] = value;
		
	}
	for (int i=0; i<n; i++) {
		int x = inarray(ranks, m, cows[i]), index=i;
		if ((x != -1) && (x != 0)) {
			for (int y=0; y<x;) {
				if (cows[index] == 0) {
					cows[index] = 1;
					y++;
				}
				index--;
			}
			break;
		}
	}
	for (int i=0; i<n; i++) {
		//printf("%d EEE\n", cows[i]);
		if (cows[i] == 0) {
			fprintf(output, "%d\n", i+1);
			break;
		}
	}
	return 0;
}
	

