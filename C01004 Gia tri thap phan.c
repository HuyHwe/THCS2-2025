#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%.15f\n", (double)1/n);
	}
	
}
