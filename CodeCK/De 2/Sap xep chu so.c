#include <stdio.h>
#include <string.h>
#include <math.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
	int t, i;
	scanf("%d", &t);
	scanf("\n");
	while (t--) {
		long long num;
		scanf("%lld", &num);
		int arr[10000], cnt = 0;
		while (num != 0) {
			arr[cnt] = num % 10;
			num /= 10;
			cnt++;
		}
		qsort(arr, cnt, sizeof(int), cmp);
		for (i = 0; i < cnt;i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
	}
}
