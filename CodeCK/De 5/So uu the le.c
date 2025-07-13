#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      long long n;
      scanf("%lld", &n);

      if (n % 2 == 0) {
        printf("NO\n");
        continue;
      }

      int cnt = 0, cntLe = 0;
      while (n){
        int soCuoi = n % 10;
        if (soCuoi % 2 == 1) cntLe++;
        cnt++;
        n /= 10;
      }
      if (cnt % 2 == 0) printf("NO\n");
      else if (cntLe > cnt - cntLe) printf("YES\n");
      else printf("NO\n");

    }

}
