#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int nguyenTo(int n) {
  int i;
  if (n <= 1) return 0;
  if (n == 2) return 1;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int a[1000][1000];
  int n, m, i, j;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      int num;
      scanf("%d", &num);
      a[i][j] = nguyenTo(num);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }




}
