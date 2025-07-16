#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
  int n, i;
  scanf("%d", &n);
  int arr[105];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int x, y;
  scanf("%d %d", &x, &y);
  int nho = arr[x-1], to = arr[y-1];
  if (nho > to) {
    int tmp = nho;
    nho = to;
    to = tmp;
  }

  int count = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] > nho && arr[i] < to) count++;
  }
  printf("%d\n", count);
}