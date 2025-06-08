#include <stdio.h>
#include <math.h>


int nguyenTo(int n) {
  if (n <= 1) return 0;
  if (n == 2) return 1;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int thuanNghich(int n) {
  int temp = n, m = 0;
  while (temp) {
    m *= 10;
    m += temp % 10;
    temp /= 10;
  }
  return m == n;
}


int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b, cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
      if (nguyenTo(i) && thuanNghich(i)) {
        printf("%d ", i);
        cnt++;
        if (cnt == 10) {
          printf("\n");
          cnt = 0;
        }
      }
    }
    printf("\n\n");
  }

	
	
}
