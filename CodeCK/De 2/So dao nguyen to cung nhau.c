#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int t, i;
	scanf("%d", &t);
	while (t--) {
		long long num, copy, dao = 0;
		scanf("%lld", &num);
		copy = num;
		while (copy != 0) {
			dao *= 10;
			dao += copy % 10;
			copy /= 10;
		}
		
		if (num < dao) {
			long long tmp = num;
			num = dao;
			dao = tmp;
		}
		
		while (num % dao != 0) {
			long long r = num % dao;
			num = dao;
			dao = r;
		}
		
		if (dao == 1) printf("YES\n");
		else printf("NO\n");
		
	}
}
