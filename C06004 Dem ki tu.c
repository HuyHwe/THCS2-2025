#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int t;
	t = 1;
	while (t--) {
		int i, chuCai = 0, so = 0, khac = 0;
		char str[200];
		scanf("\n");
		gets(str);
		for (i = 0; i < strlen(str); i++) {
			if (isalpha(str[i])) chuCai++;
            else if (isdigit(str[i])) so++;
            else khac++;
		}
		printf("%d %d %d", chuCai, so, khac);
	}
}
