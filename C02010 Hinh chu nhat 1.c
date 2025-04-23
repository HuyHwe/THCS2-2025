#include <stdio.h>
#include <math.h>

int main() {
    int a, b, i, j;
    scanf("%d %d",&a, &b);
    for (i = 1; i <= a; i++) {
      if (i <= b) {
          for (j = i; j <= b; j++) {
              printf("%d", j);
          }
          for (j = i - 1; j >= 1; j--) {
              printf("%d", j);
          }
          printf("\n");
      } else {
          printf("%d", i);
          for (j = b-1; j >= 1; j--) {
              printf("%d", j);
          }
          printf("\n");
      }

    }

}
