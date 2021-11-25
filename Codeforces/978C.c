#include <stdio.h>
int main() {
	int n, m, rn;
	rn = 1;
	scanf("%d%d", &n, &m);
	long long offset, highr, dor[n], roo[m], rodo[m][2];
	offset = 0;
	
	for (int x = 0; x < n; x++) {
		scanf("%lld", &dor[x]);
	}
	
	for (int x = 0; x < m; x++) {
		scanf("%lld", &roo[x]);
	}

	highr = dor[0];

	for (int x = 0; x < m; x++) {
		if (roo[x] <= highr) {
			rodo[x][0] = rn;
			rodo[x][1] = roo[x] - offset;
		}
		else {
			while (roo[x] > highr) {
				offset += dor[rn-1];
				rn++;
				highr += dor[rn-1];
			}

			rodo[x][0] = rn;
			rodo[x][1] = roo[x] - offset;
		}
	}
	for (int x = 0; x < m; x++) {
		printf("%lld %lld\n", rodo[x][0], rodo[x][1]);
	}
	return 0;
}
