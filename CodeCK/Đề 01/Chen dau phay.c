#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    char n[1000];
    int i;
    scanf("%s", n);
    int r = strlen(n) % 3;
    for (i = 0; i < strlen(n); i++) {
      if (r == 0) {
          if (i != 0) printf(",");
          r = 3;
      }
      printf("%c", n[i]);
      r--;
    }

}
