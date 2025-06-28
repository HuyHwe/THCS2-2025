#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
	int arr[1000], i, j, n;
	
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n-1; i++) {
		int min = arr[i], pos = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				pos = j;
			}
		}
		
		arr[pos] = arr[i];
		arr[i] = min;
		
		printf("Buoc %d: ", i+1);
		for (j = 0; j < n; j++) printf("%d ", arr[j]);
		printf("\n");
		
	}
	
	
}
