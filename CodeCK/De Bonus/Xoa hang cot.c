#include <stdio.h>
#include <string.h>

int main() {
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int a[105][105];
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    if (n > m) {
      for (i = 0; i < n - m; i++){
        for (j = 0; j < m; j++){
          a[i*2][j] = -7749;
        }
      }
    } else {
      for (j = 0; j < m - n; j++){
        for (i = 0; i < n; i++){
          a[i][j*2 + 1] = -7749;
        }
      }
    }
    for (i = 0; i < n; i++) {
      if (a[i][0] == -7749) continue;
      for (j = 0; j < m; j++){
        if(a[i][j] != -7749) printf("%d ", a[i][j]);
      }
      printf("\n");
    }

    return 0;
}
