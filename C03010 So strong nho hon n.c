#include <stdio.h>
#include <string.h>


int main() {
	
	int i, j;
	// Tao mang giaiThua de luu giai thua cac so tu 0 -> 9, do phai tinh nhieu lan
	int giaiThua[10];
	for (i = 0; i < 10; i++) {
		int prod = 1;
		for (j = 1; j <= i; j++) prod *= j;
		giaiThua[i] = prod;
	}
	
	int n;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		int sum = 0, tmp = i;
		while (tmp > 0) {
			sum += giaiThua[tmp % 10]; // Cong giai thua cua so cuoi
			tmp /= 10; // Ngat so cuoi ra khoi tmp
		}
		if (sum == i) printf("%d ", i);
		
	}
	
	
}
