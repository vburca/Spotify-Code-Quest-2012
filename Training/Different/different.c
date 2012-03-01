#include <stdio.h>
#include <math.h>

int main() {

  long long int x, y;
  while (scanf("%llu %llu", &x, &y) != EOF) {
     printf("%llu\n", (long long int) fabs(x - y));
  }
  return 0;
}
