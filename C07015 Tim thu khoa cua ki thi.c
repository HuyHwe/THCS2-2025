#include <stdio.h>
#include <math.h>

struct ThiSinh {
    int id;
    char ten[100];
    char dob[100];
    float diem1;
    float diem2;
    float diem3;
    float tong;
};

int main() {
    struct ThiSinh dsts[10000];
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("\n");
        gets(dsts[i].ten);
        gets(dsts[i].dob);
        scanf("%f %f %f", &dsts[i].diem1, &dsts[i].diem2, &dsts[i].diem3);
        dsts[i].tong = dsts[i].diem1 + dsts[i].diem2 + dsts[i].diem3;
        dsts[i].id = i+1;

    }
    float max = -1;
    for (i = 0; i < n; i++) {
        if (dsts[i].tong > max) max = dsts[i].tong;
    }

    for (i = 0; i < n; i++) {
        if (dsts[i].tong == max) {
            printf("%d %s %s %.1f\n", dsts[i].id, dsts[i].ten, dsts[i].dob, dsts[i].tong);
        }
    }

}
