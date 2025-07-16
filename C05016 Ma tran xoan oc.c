#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>



int main() {
  int n;
  scanf("%d", &n);
  int arr[105][105];

  for (int i = 0; i < 105; i++) {
    for (int j = 0; j < 105; j++) {
      arr[i][j] = 1000;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      arr[i][j] = -1;
    }
  }
  int counter = 1, ngang = 1, doc = 0, i = 1, j = 1;
  while (counter <= n * n) {
      arr[i][j] = counter++;
      if (arr[i + doc][j + ngang] > -1) {
        if (ngang == 1) {ngang = 0; doc = 1;}
        else if (ngang == -1) {ngang = 0; doc = -1;}
        else if (doc == 1) {doc = 0; ngang = -1;}
        else {doc = 0; ngang = 1;}
      }
      i += doc; j += ngang;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
