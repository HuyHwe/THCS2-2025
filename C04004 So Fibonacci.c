#include <stdio.h>
#include <math.h>



int main() {
    int t;
    long long arr[1000];
    scanf("%d", &t);
    long long a = 1, b = 1;
    for (int i = 0; i < 95; i++) {
        arr[i] = a;
        b += a;
        a = b - a;
    }

    while (t--) {
      int n;
      scanf("%d", &n);
      printf("%lld\n", arr[n-1]);
    }






}
