#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ThiSinh {
    int ma;
    char ten[100];
    char ngaysinh[20];
    float d1, d2, d3, tong;
};

int cmp(const void *a, const void *b) {
    struct ThiSinh *x = (struct ThiSinh *)a;
    struct ThiSinh *y = (struct ThiSinh *)b;
    if (y->tong > x->tong) return 1;
    else return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    struct ThiSinh ds[100];
    getchar();

    for (int i = 0; i < n; i++) {
        ds[i].ma = i + 1;
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = '\0';
        fgets(ds[i].ngaysinh, sizeof(ds[i].ngaysinh), stdin);
        ds[i].ngaysinh[strcspn(ds[i].ngaysinh, "\n")] = '\0';
        scanf("%f", &ds[i].d1);
        scanf("%f", &ds[i].d2);
        scanf("%f", &ds[i].d3);
        ds[i].tong = ds[i].d1 + ds[i].d2 + ds[i].d3;
        getchar();
    }

    qsort(ds, n, sizeof(struct ThiSinh), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.1f\n", ds[i].ma, ds[i].ten, ds[i].ngaysinh, ds[i].tong);
    }

    return 0;
}
