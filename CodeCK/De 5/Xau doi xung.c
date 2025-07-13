#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main() {
    int t, i;
    scanf("%d", &t);
    while (t--) {
      char str[100];
      scanf("%s", str);
      int countLech = 0, pos = -1;
      for (i = 0; i < strlen(str)/2; i++){
        if (str[i] != str[strlen(str) - i - 1]) {
          countLech++;
          pos = i;
        }
      }
      if (countLech > 1) printf("INVALID\n");
      else {
        if (str[pos] > str[strlen(str) - pos - 1]) str[strlen(str) - pos - 1] = str[pos];
        else str[pos] = str[strlen(str) - pos - 1];
        printf("%s\n", str);
      }
    }

}
