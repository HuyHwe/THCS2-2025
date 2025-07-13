#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    int n, i;
    scanf("%d", &n);
    int count[100005] = {0};
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for (i = 0; i < 100005; i++) {
      if (count[i] > 0) {
        printf("Phan tu %d xuat hien: %d lan\n", i, count[i]);
      }
    }

}
