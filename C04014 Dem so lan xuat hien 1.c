#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    int n, cnt = 0, counter[1000], number[1000];
    memset(counter, 0, sizeof(counter));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      int num;
      scanf("%d", &num);
      if (counter[num] == 0) {
        counter[num] = 1;
        number[cnt] = num;
        cnt++;
      } else counter[num]++;
    }
    for (int i = 0; i < cnt; i++) {
      printf("%d %d\n", number[i], counter[number[i]]);
    }
    return 0;









}
