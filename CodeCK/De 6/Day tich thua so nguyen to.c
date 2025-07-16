#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int bienDoi(int n) {
  int product = 1, divisor = 2;
  while (n != 1) {
    if (n % divisor == 0) {
      product *= divisor;
      while (n % divisor == 0) {
         n /= divisor;
      }
    }
    divisor++;
  }
  return product;
}

int main() {
    int n, i;
    scanf("%d",&n);
    int arr[1005];
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n",bienDoi(arr[i]));
    }
}
