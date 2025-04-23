#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, i, check = 1;
		scanf("%d", &n);
		for (i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				check = 0; break;
			}
		}
		if (check) printf("YES\n");
		else printf("NO\n");
	}
}
