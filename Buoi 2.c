#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		double canN = sqrt(n);
		if (canN == ceil(canN)) printf("YES\n");
		else printf("NO\n");
	}
}
