#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int thuanNghich(char str[]) {
  int i;
  for (i = 0; i < strlen(str); i++) {
    if (str[i] != str[strlen(str) - 1 - i]) return 0;
  }
  return 1;
}

int main() {
  char str[10000];
  char strMax[10000];
  int cnt = 0;
  while (scanf("%s", str) != EOF) {
    if (thuanNghich(str)) {
      if (strcmp(str, strMax) == 0) {
        cnt++;
      }
      if (strlen(str) > strlen(strMax)) {
        strcpy(strMax, str);
        cnt = 1;
      }
    }
  }
  printf("%s %d\n", str, cnt);
}
