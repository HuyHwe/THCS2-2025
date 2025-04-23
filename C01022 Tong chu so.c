#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, i, sum = 0;
		scanf("%d", &n);
		while (n) {
			sum += n % 10;
			n /= 10;
		}
		printf("%d\n", sum);
		
	}
}
