#include <stdio.h>
#include <math.h>

int main() {
    int n, m, i, j;
    int arr[10000];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        arr[i] = 1;
        for(j = i - 1; j >= 0; j--){
            arr[j] = arr[j+1] + 1;
        }
        for(j = i+1; j < m; j++) {
            arr[j] = arr[j-1] + 1;
        }
        for (j = 0; j < m; j++) {
          printf("%d", arr[j]);
        }
        printf("\n");
    }


}
