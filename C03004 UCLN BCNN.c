#include <stdio.h>
#include <math.h>

long long UCLN(long long to, long long be) {
    if (to < be) {
        long long temp = to;
        to = be;
        be = temp;
    }
    while (to % be != 0) {
      long long r = to % be;
      to = be;
      be = r;
    }
    return be;
}

int main() {
    long long a, b;
    scanf("%lld %lld",&a, &b);
    printf("%lld\n%lld",UCLN(a,b), a * b / UCLN(a,b));


}
