#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
      for (j = 0; j < n-i-1; j++) {
        printf("~");
      }
      for (j = 0; j < n; j++) {
        if (i == 0 || i == n-1) printf("*");
        else if (j == 0 || j == n-1) printf("*");
        else printf(".");
      }
      printf("\n");
    }

}
