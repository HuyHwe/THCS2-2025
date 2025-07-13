#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int tongUocCheck(int n){
  int i = 2, sum = 1; // Cong san so 1 vao day
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) sum += i + n/i;
  }
  return n % sum == 0;
}

int thuanNghichCheck(int n){
  int ncopy = n, ndao = 0;
  while(ncopy){
    ndao *= 10;
    ndao += ncopy % 10;
    ncopy /= 10;
  }
  return ndao == n;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      int n;
      scanf("%d", &n);
      int i, cnt = 0;
      for (i = 1; i < n; i++){
        if(thuanNghichCheck(i) && tongUocCheck(i)) cnt++;
      }
      printf("%d\n", cnt);
    }

}
