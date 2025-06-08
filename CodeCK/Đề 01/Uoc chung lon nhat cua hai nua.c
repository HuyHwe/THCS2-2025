#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);
    char number[30];
    int i;
    for (i = 0; i < t; i++) {
        scanf("%s", number);
        int len = strlen(number);

        if (len % 2 != 0) {
            printf("INVALID\n");
        } else {
            int half = len / 2;
            char left[20], right[20];

            strncpy(left, number, half);
            left[half] = '\0';

            strcpy(right, number + half);

            long long left_num = atoll(left);
            long long right_num = atoll(right);

            printf("%lld\n", gcd(left_num, right_num));
        }
    }

    return 0;
}
