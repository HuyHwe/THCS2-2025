#include <stdio.h>
#include <math.h>


int soHoanHao(int n) {
	int canN = sqrt(n), sum = 0;
	for (int i = 1; i <= canN; i++) {
		if (n % i == 0) {
			sum += i + (n/i);
		}
	}
	if (n == canN*canN) sum -= canN;
    sum -= n;
    if (n == sum) return 1;
    else return 0;
}

int main() {
	int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
      if (soHoanHao(i)) printf("%d ", i);
    }
	
}
