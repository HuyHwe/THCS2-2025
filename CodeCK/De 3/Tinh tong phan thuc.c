#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
	int t, i;
	scanf("%d", &t);
	while (t--) {
		int n;
		double sum = 0;
		scanf("%d", &n);
		if (n % 2 == 1) {
			for (i = 1; i <= n; i+=2) {
				sum += 1/(double)i;
			}
		} else {
			for (i = 2; i <= n; i+=2) {
				sum += 1/(double)i;
			}
		}
		
		printf("%.6lf\n", sum);
	}
}
