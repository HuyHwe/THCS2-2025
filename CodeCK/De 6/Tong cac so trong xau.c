#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    char line[10005];
    long long sum = 0;
    int i;
    gets(line);
    char *p = strtok(line, " ");
    while (p != NULL) {
      int check = 1;
      for (i = 0; i < strlen(p); i++) {
        if (!isdigit(p[i])) {
          check = 0;
          break;
        }
      }
      if (check) sum += atoll(p);
      p = strtok(NULL, " ");
    }
    printf("%lld\n", sum);
}
// Hello cac em, chuc cac ban thi tot duoc 4 hoac 5 cau nhe, diem 10 nha cac em!
