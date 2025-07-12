#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int i, cnt = 0;
		char str[200];
		scanf("\n");
        gets(str);
        for (i = 1; i < strlen(str); i++) {
	        if (str[i] != ' ' && str[i-1] == ' ') {
		        cnt++;
	        }
        }
		printf("%d\n", cnt + 1);
	}
}
