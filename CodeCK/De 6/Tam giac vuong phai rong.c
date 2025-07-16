#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
      int n, i, j, k;
      scanf("%d",&n);
      for (i = 0; i < n; i++) {
        for (j = n - 1 - i; j > 0; j--) {
          printf("~");
        }
        for (j = 0; j <= i; j++) {
          if(j == 0 || j == i || i == n-1) printf("*");
          else printf("-");
        }
        printf("\n");
      }
    }

}
