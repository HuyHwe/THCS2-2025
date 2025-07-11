#include <stdio.h>
#include <string.h>
#include <math.h>

// Cach 1
int nguyenTo(int n) {
	int i;
	if (n <= 1) return 0;
	if (n == 2) return 1;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

// Cach 2
int nguyenToEz(int n){
	int answer[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};
	return answer[n];
}


int main() {
	int t, i;
	scanf("%d", &t);
	while (t--) {
		char num[1000] ;
		scanf("%s", &num);
		if (!nguyenToEz(strlen(num))) printf("NO\n");
		else {
			int count = 0;
			for (i = 0; i < strlen(num); i++) {
				count += nguyenToEz(num[i] - '0');
			}
			if (count > strlen(num) - count) printf("YES\n");
			else printf("NO\n");
		}
	}
}
