#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
      int lon, be;
      scanf("%d %d", &lon, &be);
      if (lon < be) {
          int temp = be;
          be = lon;
          lon = temp;
      }
      int r = be;
      while (lon % be != 0) {
        r = lon % be;
        lon = be;
        be = r;
      }
      printf("%d\n", r);

    }
}
