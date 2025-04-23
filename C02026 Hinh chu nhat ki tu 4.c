#include <stdio.h>
#include <string.h>

// Nhan xet: cau nay nen su dung mang de lam cho nhanh
/* Huong lam: hang cuoi cung luon luon la cac chu cai tu A -> max: A + (cot-1)
	1. Khoi tao hang cuoi truoc, dau mang ket qua (c)
	2. Cac hang tren thi duyet tu dau hang truoc do, ki tu nho hon ki tu max thi +1, = max roi thi khong can cong
	3. Duyet nguoc tu duoi len cua mang c
*/
int main() {
	int i, j, k;
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	char c[100][100];
	for (i = 0; i < cot; i++) c[0][i] = 'A' + i;
	
	for (i = 1; i < hang; i++) {
		for (j = 0; j < cot; j++) {
			if (c[i-1][j] - 'A' < cot - 1) c[i][j] = c[i-1][j] + 1;
			else c[i][j] = c[i-1][j];
		}
	}
	for (i = hang - 1; i >= 0; i--) {
		for (j = 0; j < cot; j++) {
			printf("%c", c[i][j]);
		}
		printf("\n");
	}
}
