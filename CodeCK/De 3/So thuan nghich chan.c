#include <stdio.h>
#include <string.h>
#include <math.h>

int thuanNghich(int n) {
	int cnt = 0, ncopy = n, ndao = 0;
	while (ncopy != 0) {
		if (ncopy % 2 == 1) return 0;
		ndao *= 10;
		ndao += ncopy % 10;
		ncopy /= 10;
		cnt++;
	}
	
	if (ndao != n) return 0;
	if (cnt % 2 != 0) return 0;
	return 1;
}

int main() {
	int t, i;
	scanf("%d", &t);
	scanf("\n");
	while (t--) {
		int n, i;
		scanf("%d", &n);
		for (i = 22; i < n; i++) {
			if (thuanNghich(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
