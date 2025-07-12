#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int doiXung(char str[]) {
    int i, check = 1;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != str[strlen(str) - i - 1]) {
            check = 0; break;
        }
    }
    return check;
}

int main() {
    int n, t;
    scanf("%d", &n);
    scanf("\n");
    for (t = 1; t <= n; t++){
      char str[10000];
      int cnt = 0;
      gets(str);
      char *p = strtok(str, " ");
      while (p != NULL) {
        if (doiXung(p)) cnt++;
        p = strtok(NULL, " ");
      }

      printf("Test %d: %d\n", t, cnt);
    }

}
