#include <stdio.h>
#include <math.h>



int main() {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min1 = 9999998, min2 = 9999999;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < min2 && arr[i] > min1) {
            min2 = arr[i];
        }
    }


    printf("%d %d", min1, min2);





}
