#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      long long n, i;
      scanf("%lld", &n);
      if (n < 10) {
        printf("NONE\n");
      } else {
        int cnt = 0;
        long long ncopy = n;
        while (ncopy > 0) {
          cnt++;
          ncopy /= 10;
        }
        if (cnt % 2 == 0) {
          printf("NONE\n");
        } else {
          for (i = 0; i < cnt/2; i++) n /= 10;
          printf("%lld\n", n % 10);
        }
      }
    }
    return 0;
}
/*
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

 */