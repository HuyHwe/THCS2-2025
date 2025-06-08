#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


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
    int n, i;
    scanf("%d", &n);
    struct ThiSinh dsts[10000];
    for (i = 1; i <= n; i++) {
        scanf("\n");
        gets(dsts[i].ten);
        gets(dsts[i].dob);
        scanf("%f %f %f", &dsts[i].diem1, &dsts[i].diem2, &dsts[i].diem3);
        dsts[i].tong = dsts[i].diem1 + dsts[i].diem2 + dsts[i].diem3;
        dsts[i].id = i;
    }

    float max = -1;
    for (i = 1; i <= n; i++) {
        if (dsts[i].tong > max) max = dsts[i].tong;
    }

    for (i = 1; i <= n; i++) {
        if (dsts[i].tong == max) printf("%d %s %s %.1f\n", dsts[i].id, dsts[i].ten, dsts[i].dob, dsts[i].tong);
    }




}

/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
8.5
9.5
8.5
 */