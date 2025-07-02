#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    char n[1000];
    int i;
    scanf("%s", n);
    int so[105];
    int dem[105] = {0};
    int cnt = 0;
    int num = 0;
    for (i = 0; i < strlen(n); i++) {
      num *= 10;
      num += (n[i] - '0');
      if (i % 2 == 1) {
        if (dem[num] == 0) so[cnt++] = num;
        dem[num] += 1;
        num = 0;
      }
    }
    for (i = 0; i < cnt; i++) {
      printf("%d %d\n", so[i], dem[so[i]]);
    }

}
