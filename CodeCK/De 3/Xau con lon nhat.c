#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
	int t, i;
	t = 1;
	while (t--) {
		int i, last = -1, cnt = 0;
		char str[100005];
		char ans[100005];
		scanf("%s", &str);
		while (last != strlen(str) - 1) {
			int max = str[last+1];
			for (i = last+2; i < strlen(str); i++) {
				if (str[i] > max){
					max = str[i];
				}
			}
			i = last+1;
			for (; i < strlen(str); i++) {
				if (str[i] == max){
					ans[cnt++] = max;
					last = i;
				}
			}
		}
		printf("%s\n", ans);
		
	}
}
