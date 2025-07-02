#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    char number[20];

    for (int i = 0; i < T; i++) {
        scanf("%s", number);
        int len = strlen(number);

        if (len % 2 == 0 || len == 1) {
            printf("NONE\n");
        } else {
            int mid = len / 2;
            printf("%c\n", number[mid]);
        }
    }

    return 0;
}
