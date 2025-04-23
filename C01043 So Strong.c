#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int temp = n;
    while (temp) {
      int num = temp % 10;
      if (num == 0) sum++;
      else {
        int prod = 1;
        for (int i = 1; i <= num; i++) {
          prod *= i;
        }
        sum += prod;
      }
      temp /= 10;
    }
    printf("%d", sum == n);

}
