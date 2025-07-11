#include <stdio.h>
#include <string.h>
#include <time.h>

struct Khach {
    char ten[105];
    int phong;
    int o;
    int tien;
};

int gia[] = {0, 25, 34, 50, 80};

int tang(int phong) {
    return phong / 100;
}

int cmp(const void *a, const void *b) {
    struct Khach *x = (struct Khach*)a;
    struct Khach *y = (struct Khach*)b;
    return y->tien - x->tien;
}

int main() {
    int n, i;
    scanf("%d\n", &n);
    struct Khach ds[25];
    for (i = 0; i < n; i++) {
    	scanf("\n");
        gets(ds[i].ten);
        scanf("%d", &ds[i].phong);
        scanf("%d", &ds[i].o);
        int t = tang(ds[i].phong);
        ds[i].tien = ds[i].o * gia[t];
    }

    qsort(ds, n, sizeof(ds[0]), cmp);

    for (i = 0; i < n; i++) {
        printf("%s %d %d %d\n", ds[i].ten, ds[i].phong, ds[i].o, ds[i].tien);
    }

    return 0;
}

/*
2
Alice
404
2
Bob
202
5

3
Charlie
105
3
David
302
1
Eve
101
4

4
Henry
401
1
Ivy
205
2
Jack
303
3
Kate
102
4

1
Leo
404
10

10
Anna
101
3
Brian
204
2
Clara
303
4
David
405
1
Eva
202
5
Frank
302
2
Grace
404
3
Helen
105
6
Isaac
201
1
Jack
401
4

*/


