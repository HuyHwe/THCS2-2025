#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien {
	int id;
	char ten[100];
	char lop[100];
	int toan;
	int ly;
	int hoa;
	int tb;
	char hocLuc[100];
};

void sapXep(struct SinhVien *head) {

}

int main() {
	int i;
	struct SinhVien svList[100];
	int svCnt = 0;
	FILE *fp;
	fp = fopen("student.txt", "r");
	char str[1000];
	while (fgets(str, 100, fp) != NULL) {
		printf("%s", str);
		struct SinhVien sv;
		char *p = strtok(str, " ");
		int cnt = 0;
		while (p != NULL) {
			if (cnt == 0) {
				sv.id = atoi(p);
			} else if (cnt == 1) {
				strcpy(sv.ten, p);
			} else if (cnt == 2) {
				strcpy(sv.lop, p);
			} else if (cnt == 3) {
				sv.toan = atoi(p);
			} else if (cnt == 4) {
				sv.ly = atoi(p);
			} else if (cnt == 5) {
				sv.hoa = atoi(p);
				cnt = -1;
			}
			cnt++;
			p = strtok(NULL, " ");
		}

		svList[svCnt] = sv;
		svCnt++;

	}
}
