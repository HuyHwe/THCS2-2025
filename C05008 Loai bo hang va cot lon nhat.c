#include <stdio.h>

int main() {
  int t, test = 0;
  scanf("%d", &t);
  for (test = 1; test <= t; ++test) {
    int m, n, i, j;
    scanf("%d %d", &n, &m);
    int arr[100][100];
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    }
    int hangMax = -99999, cotMax = -99999, hangPos, cotPos;
    for (i = 0; i < n; i++) {
      int sumHang = 0;
      for (j = 0; j < m; j++) sumHang += arr[i][j];
      if (sumHang > hangMax) {
        hangMax = sumHang;
        hangPos = i;
      }
    }
    for (i = 0; i < n; i++) {
      if (i != hangPos) continue;
      for (j = 0; j < m; j++) arr[i][j] = 0;

    }


    for (i = 0; i < m; i++) {
      int sumCot = 0;
      for (j = 0; j < n; j++) sumCot += arr[j][i];
      if (sumCot > cotMax) {
        cotMax = sumCot;
        cotPos = i;
      }
    }
    printf("Test %d:\n", test);
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if(i != hangPos && j != cotPos) printf("%d ", arr[i][j]);
      }
      printf("\n");
    }



  }


  return 0;
}
