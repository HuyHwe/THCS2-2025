#include <stdio.h>
#include <string.h>


int main() {
	int i, j;
	int cao;
	scanf("%d", &cao);
	/* Nhan xet: tam giac rong o giua nen dau sao chi duoc in ra khi:
	 1. Dinh tam giac
	 2. Day tam giac
	 3. Canh ria tam giac
	 
	*/
	
	for (i = 0; i < cao; i++) {
		for (j = 0; j <= i; j++) {
			if (i == cao-1) printf("*");
			else if (j == 0 || j == i) printf("*");
			else printf(".");
		}
		// Nho xuong dong sau khi in ra moi dong sao
		printf("\n");
	}
	
	
}
