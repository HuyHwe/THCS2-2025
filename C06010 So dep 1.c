#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int thuanNghich(char s[]) {
	int i;
	int n = strlen(s);
	for (i = 0; i < n; i++) {
		if (s[i] != s[n-i-1]) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int i, chuCai = 0, so = 0, khac = 0;
		char str[1000];
		scanf("\n");
		gets(str);
        int check = 1;

		for (i = 0; i < strlen(str); i++) {
			if (str[i]) {
				int num = str[i] - '0';
				if (num % 2 == 1) {
					check = 0;
					break;
				}
			}
		}
		if (check) check = thuanNghich(str);
		if (check) printf("YES\n");
		else printf("NO\n");
	}
}
