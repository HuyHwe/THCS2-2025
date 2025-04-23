#include <stdio.h>
#include <math.h>

int main() {
	int ans[100000];
	int m, n, cnt = 0, i;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		if (sqrt(i) == ceil(sqrt(i))) {
			ans[cnt] = i;
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	for (i = 0; i < cnt; i++) {
		printf("%d\n", ans[i]);
	}
	
}
