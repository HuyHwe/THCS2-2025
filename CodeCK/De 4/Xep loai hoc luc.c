    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    struct SinhVien {
        char ma[20];
        char ten[105];
        char ngaysinh[15];
        float d1, d2, d3, tichluy;
        float gpa;
        char xeploai[50];
    };

    int main() {
        int n, i;
        scanf("%d\n", &n);
        struct SinhVien ds[100];

        for (i = 0; i < n; i++) {
            scanf("\n");
            gets(ds[i].ma);
            gets(ds[i].ten);
            gets(ds[i].ngaysinh);
            scanf("%f %f %f %f", &ds[i].d1, &ds[i].d2, &ds[i].d3, &ds[i].tichluy);
            ds[i].gpa = (ds[i].tichluy * 21 + ds[i].d1 * 3 + ds[i].d2 * 3 + ds[i].d3 * 4) / 31;
            if (ds[i].gpa < (float)1) strcpy(ds[i].xeploai, "Kem");
            else if (ds[i].gpa < (float)2) strcpy(ds[i].xeploai , "Yeu");
            else if (ds[i].gpa < (float)2.5) strcpy(ds[i].xeploai , "Trung binh");
            else if (ds[i].gpa < (float)3.2) strcpy(ds[i].xeploai , "Kha");
            else if (ds[i].gpa < (float)3.6) strcpy(ds[i].xeploai , "Gioi");
            else strcpy(ds[i].xeploai , "Xuat sac");

        }


        for (i = 0; i < n; i++) {
            printf("%s %s %s %.2f %s\n", ds[i].ma, ds[i].ten, ds[i].ngaysinh, ds[i].gpa, ds[i].xeploai);
        }

        return 0;
    }

    /*
    3
    B22DCCN123
    Nguyen Van A
    11/11/2001
    2
    3
    3.5
    3.2
    B22DCCN234
    Nguyen Van B
    11/12/2001
    2.5
    3.5
    3
    2.8
    B22DCCN345
    Nguyen Van C
    22/02/2001
    2
    0
    2
    1.8

    */