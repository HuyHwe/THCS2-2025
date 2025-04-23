#include <stdio.h>
#include <math.h>



int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      long long n;
      scanf("%lld", &n);
      long long temp = n, m = 0;
      while (temp) {
        m *= 10;
        m += temp % 10;
        temp /= 10;
      }
      if (m == n) printf("YES\n");
      else printf("NO\n");
    }




}
