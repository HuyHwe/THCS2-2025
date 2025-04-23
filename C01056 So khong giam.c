#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int truoc = n % 10;
        int check = 1;
        while (n > 0) {
          if (n % 10 > truoc) {
            check = 0;
            break;
          }
          n /= 10;
        }
        if (check) printf("YES\n");
        else printf("NO\n");

    }

}
