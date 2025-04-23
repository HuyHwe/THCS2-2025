#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int canN = sqrt(n);
    for (int i = 1; i <= canN; i++) {
      if (n % i == 0) {
        sum += i + (n/i);
      }
    }
    if (n == canN*canN) sum -= canN;
    sum -= n;
    printf("%d", sum == n);




}
