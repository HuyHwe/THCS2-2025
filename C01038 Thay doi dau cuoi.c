#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int cuoi = n % 10, dau = n, lenN = 0;
    while (dau > 10) {
      dau /= 10;
      lenN++;
    }
    n -= cuoi;
    n -= dau * pow(10, lenN);
    n += dau;
    n += cuoi * pow(10, lenN);
    printf("%d\n", n);




}
