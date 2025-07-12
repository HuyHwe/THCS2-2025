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


void quyDong(struct PhanSo ps1, struct PhanSo ps2) {
  long long mauChung = ps1.mau * ps2.mau / ucln(ps1.mau, ps2.mau);
  ps1.tu = ps1.tu * mauChung/ps1.mau;
  ps1.mau = mauChung;
  ps2.tu = ps2.tu * mauChung/ps2.mau;
  ps2.mau = mauChung;
  printf("%lld/%lld %lld/%lld\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau);
}

void tinhTong(struct PhanSo ps1, struct PhanSo ps2) {
  long long mauChung = ps1.mau * ps2.mau / ucln(ps1.mau, ps2.mau);
  ps1.tu = ps1.tu * mauChung/ps1.mau;
  ps2.tu = ps2.tu * mauChung/ps2.mau;
  printf("%lld/%lld\n", ps1.tu + ps2.tu, mauChung);
}

void tinhThuong(struct PhanSo ps1, struct PhanSo ps2) {
  long long tu = ps1.tu * ps2.mau;
  long long mau = ps1.mau * ps2.tu;
  long long uoc = ucln(tu, mau);
  tu = tu/uoc;
  mau = mau/uoc;
  printf("%lld/%lld\n", tu, mau);
}



int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    struct PhanSo ps1, ps2;
    long long tu;
    long long mau;
    scanf("%lld %lld", &tu, &mau);
    long long uoc = ucln(tu, mau);
    ps1.tu = tu/uoc;
    ps1.mau = mau/uoc;

    scanf("%lld %lld", &tu, &mau);
    uoc = ucln(tu, mau);
    ps2.tu = tu/uoc;
    ps2.mau = mau/uoc;
    printf("Case #%d:\n", i);
    quyDong(ps1, ps2);
    tinhTong(ps1, ps2);
    tinhThuong(ps1, ps2);
  }


}
