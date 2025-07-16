#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int nguyenTo(int n) {
    int i;
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    if (nguyenTo(n)) printf("YES\n");
    else printf("NO\n");
  }
}