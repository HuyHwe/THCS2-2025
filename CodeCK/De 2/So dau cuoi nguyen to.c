#include <stdio.h>
#include <string.h>
#include <math.h>

int nguyenTo(int n) {
	int i;
	if (n <= 1) return 0;
	if (n == 2) return 1;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int t, i;
	scanf("%d", &t);
	while (t--) {
		char num[10000];
		scanf("%s", &num);
		int length = strlen(num);
		int dau = (num[0] - '0') * 100 + (num[1] - '0') * 10 + num[2] - '0';
		int cuoi = (num[length-3] - '0') * 100 + (num[length-2] - '0') * 10 + num[length-1] - '0';
		
		if (nguyenTo(dau) && nguyenTo(cuoi)) printf("YES\n");
		else printf("NO\n");
	}
}
