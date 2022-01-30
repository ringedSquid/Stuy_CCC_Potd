#include <stdio.h>
#include <string.h>
int findg(int arr1[], int arr2[]) {
	int a=0, b=0;
	for (int i=0; i<4; i++) {
		for (int y=0; y<4; y++) {
			if (arr1[i] > arr2[y]) {
				a++;
			}
			else if (arr1[i] == arr2[y]) {
				a++;
				b++;
			}
		}
	}
	for (int i=0; i<4; i++) {
		for (int y=0; y<4; y++) {
			if (arr2[i] > arr1[y]) {
				b++;
			}
			else if (arr2[i] == arr1[y]) {
				a++;
				b++;
			}
		}
	}
	//printf("%d, %d\n", a, b);
	if (a > b) {
		return 1;
	}
	else if (a < b) {
		return 2;
	}
	else {
		return 0;
	}
}

int solve(int arr1[], int arr2[]) {
	if ((findg(arr1, arr2) == 2) || (findg(arr1, arr2) == 0)) {
		return 0;
	}
	int c[4] = {1, 1, 1, 1};
	for (int y=0; y<10000; y++) {
		if ((findg(c, arr1) == 1) && (findg(arr2, c) == 1)) {
			return 1;
		}
		c[3]++;
		for (int z=3; z>0; z--) {
			if (c[z] > 10) {
				c[z-1]++;
				c[z] = 1;
			}
		}
	}
	return 0;
}

		

int main(void) {
	int n, a[4], b[4];
	scanf("%d", &n);
	for (int i=0; i<3; i++) {
		for (int y=0 ; y<4; y++) {
			scanf("%d", &a[y]);
		}
		for (int y=0; y<4; y++) {
			scanf("%d", &b[y]);
		}
		if (solve(a, b) == 1) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
		
	}
	return 0;
}





