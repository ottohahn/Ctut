#include <stdio.h>

/* Count characters in input first version */

int main() {
    long nc;

    nc = 0;
    while (getchar() != EOF) {
      ++nc;
    }
      printf("%ld\n", nc);
}
