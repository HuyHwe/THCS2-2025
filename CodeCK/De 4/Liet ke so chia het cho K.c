#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    int a, k, n;
    scanf("%d %d %d", &a, &k, &n);
    int r = a % k;
    int i, cnt = 0;
    for (i = k-r; i <= n - a; i += k) {
        printf("%d ", i);
        cnt++;
    }
    if (cnt == 0) printf("-1\n");
    else printf("\n");

}
