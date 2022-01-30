#include <stdio.h>
int max(int arr[]) {
	int mx=0;
	for (int i=0; i<8; i++) {
		if (arr[i] > mx) {
			mx = arr[i];
		}
	}
	return mx;
}
int min(int arr[]) {
	int mn=11;
	for (int i=0; i<8; i++) {
		if (arr[i] < mn) {
		       mn = arr[i];
		}
	}
	return mn;
}
		
		
int main(void) {
	int n, a[8];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		for (int y=0; y<8; y++) {
			scanf("%d", &a[y]);
		}
		if ((max(a)-min(a)) > 1) {
			printf("yes\n");
		}
		else {
			printf("no\n





