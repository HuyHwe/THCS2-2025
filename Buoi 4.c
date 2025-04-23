#include <stdio.h>
#include <math.h>


int nguyenTo(int n) {
	int i;
	if (n <= 1) return 0;
	if (n == 2) return 1;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

void fibo() {
	long long a, b, i;
	a = 1;
	b = 1;
	for (i = 0; i < 20; i++) {
		printf("%d ", a);
		long long temp = a + b;
		a = b;
		b = temp;
	}
}

int ucln(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	while (a % b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return b;
}


int thuanNghich (long long n) {
	long long temp = n, m = 0;
	while (temp != 0) {
		printf("Gia tri cua m la: %d\n", m);
		int num = temp % 10;
		m *= 10;
		m += num;
		temp /= 10;
	}
	if (n == m) return 1;
	else return 0;
}



int main() {
	int n;
	scanf("%d", &n);
	printf("%d", thuanNghich(n));
}
