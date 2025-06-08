#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int t;
	t = 1;
	while (t--) {
		char s1[100], s2[100];
        gets(s1);
		gets(s2);
		char *p = strtok(s1, " ");
		while (p != NULL) {
			if (strcmp(p, s2) != 0) printf("%s ", p);
			p = strtok(NULL, " ");
		}

	}
}
