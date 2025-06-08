#include <stdio.h>
#include <math.h>


int nguyenTo(int n) {
  if (n <= 1) return 0;
  if (n == 2) return 1;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      int n, arr[1005];
      scanf("%d", &n);
      for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
      }
      for (int i = 0; i < n; i++) {
        if (nguyenTo(arr[i])) {
          printf("%d ", arr[i]);
        }
      }
      printf("\n");
    }






}
