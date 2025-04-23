#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int chan = 0, le = 0;
    while (n) {
      if (n % 2 == 0) chan++;
      else le++;
      n /= 10;
    }
    printf("%d %d", le, chan);
}
