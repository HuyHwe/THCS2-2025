#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int t, i;
	scanf("%d", &t);
	scanf("\n");
	while (t--) {
		char c[1000];
		int check = 1;
		gets(c);
		for (i = 1; i < strlen(c); i++) {
			if (abs(c[i] - c[i-1]) != 1) {
				check = 0; 
				break;
			}
		}
		if (check) printf("YES\n");
		else printf("NO\n");
	}
}
