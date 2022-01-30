#include <stdio.h>
int inside(char arr[], char x, int size) {
	for (int i=0; i<size; i++) {
		if (arr[i] == x) {
			arr[i] = 0;
			return 1;
		}
	}
	return 0;
}
int main(void) {
	int g=0, y=0;
	char guess[9], real[9];
	for (int i=0; i<9; i++) {
		scanf(" %c", &real[i]);
	}
	for (int i=0; i<9; i++) {
		scanf(" %c", &guess[i]);
	}
	for (int i=0; i<9; i++) {
		if (real[i] == guess[i]) {
			real[i] = 0;
			guess[i] = 1;
			g++;
		}
	}
	for (int i=0; i<9; i++) {
		if (inside(real, guess[i], 9) == 1) {
			y++;
		}
	}
	printf("%d\n%d", g, y);
	return 0;


}


