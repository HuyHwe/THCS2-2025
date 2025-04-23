#include <stdio.h>
#include <math.h>

int nguyenTo(long long n) {
  if (n <= 1) return 0;
  else if (n == 2) return 1;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}


int main() {
    int n;
    scanf("%d",&n);
    long long i = 2;
    while (n) {
      if (nguyenTo(i)) {
        printf("%lld\n", i);
        n--;
      }
      i++;
    }

}
