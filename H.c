#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);

  for (int t = 0; t < T; t++) {
    char S[100001];
    scanf("%s", S);

    if (strstr(S, "010") != NULL || strstr(S, "101") != NULL) {
      printf("Good\n");
    } else {
      printf("Bad\n");
    }
  }

  return 0;
}
