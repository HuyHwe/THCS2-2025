#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct PhanSo {
  long long tu;
  long long mau;
};

long long ucln(long long a, long long b) {
  if (a < b) {
    long long t = a;
    a = b;
    b = t;
  }
  while (a % b != 0) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return b;

}



int main() {
  long long tu;
  long long mau;
  scanf("%lld %lld", &tu, &mau);
  struct PhanSo ps;
  long long uoc = ucln(tu, mau);
  ps.tu = tu/uoc;
  ps.mau = mau/uoc;
  printf("%lld/%lld", ps.tu, ps.mau);
}
