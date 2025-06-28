#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int thuanNghich(char str[]) {
	int i;
	int n = strlen(str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] != str[n-i-1]) return 0;
	}
	return 1;
}


int main() {
	int t;
	scanf("%d", &t);
	scanf("\n");
	int i;
	while (t--) {
		char num[1000];
		gets(num);
		if (thuanNghich(num)) {
			int check = 1;
			for (i = 0; i < strlen(num); i++) {
				int n = num[i] - '0';
				if (n % 2 == 1) {
					check = 0;
					break;
				}
			}
			if (check) {
				printf("YES\n");
			} else printf("NO\n");
		} else printf("NO\n");
	}
}
