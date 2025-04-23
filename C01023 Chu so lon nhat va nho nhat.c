#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
      scanf("%lld", &n);
      int max = -1, min = 100;
      while (n) {
          int num = n % 10;
          if (num > max) max = num;
          if (num < min) min = num;
          n /= 10;
      }
      printf("%d %d\n", max, min);
    }
}
