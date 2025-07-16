#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Tu {
  char val[1000];
  int count;
};

int main() {
    char str[100000];
    struct Tu ds[1005];
    int i, cnt = 0;
    gets(str);
    char *p = strtok(str, " ");
    int minLength = 999999999;
    while (p != NULL) {
      struct Tu t;
      t.count = 1;
      strcpy(t.val, p);
      int isExist = 0;
      for (i = 0; i < cnt; i++) {
        if (strcmp(t.val, ds[i].val) == 0) {
          ds[i].count++;
          isExist = 1;
        }
      }
      if (!isExist) ds[cnt++] = t;
      if (strlen(t.val) < minLength) minLength = strlen(t.val);
      p = strtok(NULL, " ");
    }
    printf("%d\n", minLength);
    int countTuMin = 0;


    char checkTu[1000][1000];
    int cntcheckTu = 0;
    for (i = 0; i < cnt; i++) {
      if(strlen(ds[i].val) == minLength) {
        int check = 1, j;
        for (j = 0; j < cntcheckTu; j++) {
          if (strcmp(ds[i].val, checkTu[j]) == 0) {
            check = 0;
            break;
          }
        }
        if (check) {
          strcpy(checkTu[cntcheckTu++], ds[i].val);
          countTuMin++;
        }
      }
    }




    printf("%d\n", countTuMin);
    for (i = 0; i < cnt; i++) {
        countTuMin += ds[i].count;
        if(strlen(ds[i].val) == minLength) printf("%s %d\n", ds[i].val, ds[i].count);
    }
}
