#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		if (sqrt(n) == ceil(sqrt(n))) printf("YES\n");
		else printf("NO\n");
	}
}
