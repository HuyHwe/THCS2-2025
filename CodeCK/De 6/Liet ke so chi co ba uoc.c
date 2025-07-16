#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int nguyenTo(long long n) {
  if (n <= 1) return 0;
  if (n == 2) return 1;
  for (long long i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
      long long L, R;
      scanf("%lld%lld",&L,&R);
      int cnt = 0;
      for (long long i = ceil(sqrt((double)L)); i <= sqrt(R); i++) {
          if (nguyenTo(i)) {
              printf("%lld ",i*i);
              cnt++;
          }
      }
      if (cnt) printf("\n");
      else printf("-1\n");
    }

}
