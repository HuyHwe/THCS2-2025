#include <stdio.h>
#include <math.h>



int main() {
    long long n, arr[100000];
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
      scanf("%lld", &arr[i]);
    }
    double sum = 0;
    for (int i = n - 1; i >= 0; i--) {
      sum += arr[i];
    }
    printf("%.3lf", sum/n);






}
