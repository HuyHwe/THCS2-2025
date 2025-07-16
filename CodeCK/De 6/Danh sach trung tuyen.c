#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ThiSinh {
    int ma;
    char ten[105];
    char ngaySinh[25];
    int tongDiem;
};

int cmp(const void *a, const void *b) {
    struct ThiSinh *x = (struct ThiSinh*)a;
    struct ThiSinh *y = (struct ThiSinh*)b;

    if (x->tongDiem != y->tongDiem) {
        return y->tongDiem - x->tongDiem;
    }
    return x->ma - y->ma;
}

int main() {
    int n, d, i;
    scanf("%d %d", &n, &d);
    struct ThiSinh ds[100];

    for (i = 0; i < n; i++) {
        scanf("\n");
        gets(ds[i].ten);
        gets(ds[i].ngaySinh);
        int diem1, diem2, diem3;
        scanf("%d %d %d", &diem1, &diem2, &diem3);
        ds[i].tongDiem = diem1 + diem2 + diem3;
        ds[i].ma = i + 1;
    }

    qsort(ds, n, sizeof(ds[0]), cmp);

    for (i = 0; i < n; i++) {
        if (ds[i].tongDiem >= d) {
            printf("%d %s %s %d\n", ds[i].ma, ds[i].ten, ds[i].ngaySinh, ds[i].tongDiem);
        }
    }

    return 0;
}





