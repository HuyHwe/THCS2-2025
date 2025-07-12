#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int kiemTra(int n){
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  int i;
  if (sum <= 1) return 0;
  if (sum == 2) return 1;
  for (i = 2; i <= sqrt(sum); i++) {
    if (sum % i == 0) return 0;
  }
  return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      int a, b, i;
      scanf("%d %d", &a, &b);
      if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
      }

      int check = 0;
      for (i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) {
          if (kiemTra(i)) {
            printf("%d ", i);
            check = 1;
          }
        }
      }
      if (check) printf("\n");
      else printf("-1\n");
    }

}
