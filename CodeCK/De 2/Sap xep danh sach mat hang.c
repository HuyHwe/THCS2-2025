#include <stdio.h>
#include <string.h>
#include <math.h>

struct Hang {
	int id;
	char ten[1000];
	char nhom[1000];
	float mua;
	float ban;
	float loi;
};

int cmp(const void *a, const void *b){
	struct Hang *h1 = (struct Hang *) a;
	struct Hang *h2 = (struct Hang *) b;
	float out = h1->loi - h2->loi;
	if (out <= 0) return -1;
	else return 1;
}

int main() {
	int n, i;
	scanf("%d", &n);
	struct Hang ds[1000];
	for (i = 0; i < n; i++) {
		
		scanf("\n");
		gets(ds[i].ten);
		gets(ds[i].nhom);
		scanf("%f", &ds[i].mua);
		scanf("%f", &ds[i].ban);
		ds[i].loi = ds[i].ban - ds[i].mua;
		ds[i].id = i+1;
	
	}
	
	qsort(ds, n, sizeof(ds[0]), cmp);
	
	for (i = 0; i < n; i++) {
		printf("%d %s %s %.2f\n", ds[i].id, ds[i].ten, ds[i].nhom, ds[i].loi);
	}
}
