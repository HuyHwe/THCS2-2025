#include <stdio.h>

int main() {
    int n, arr[1000], kq[1000];
    int i, j, k, cnt = 1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    kq[0] = arr[0];
    printf("Buoc 0: %d\n", kq[0]);

    for (i = 1; i < n; ++i) {
        j = 0;
        while (j < cnt && kq[j] < arr[i]) j++;
        
        
        for (k = cnt; k > j; k--) kq[k] = kq[k - 1];
        
		
		kq[j] = arr[i];
        cnt++;
        printf("Buoc %d: ", cnt - 1);
        for (k = 0; k < cnt; k++) printf("%d ", kq[k]);
        printf("\n");
    }
    return 0;
}
