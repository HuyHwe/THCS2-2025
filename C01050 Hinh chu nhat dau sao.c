#include <stdio.h>
#include <string.h>


int main() {
	int i, j;
	int rong, cao;
	scanf("%d%d", &rong, &cao);
	/* Nhan xet: HCN rong o giua nen dau sao chi duoc in ra o:
	 1. dong dau
	 2. dong cuoi
	 3. vi tri dau/cuoi moi dong
	*/
	
	for (i = 0; i < cao; i++) {
		for (j = 0; j < rong; j++) {
			if (i == 0 || i == cao-1) printf("*");
			else if (j == 0 || j == rong-1) printf("*");
			else printf(" ");
		}
		// Nho xuong dong sau khi in ra moi dong sao
		printf("\n");
	}
	
	
}
