#include <stdio.h>

int main() {

  int b, k, g;
  scanf("%d %d %d", &b, &k, &g);

  int teams = k / g;
  int days = 0;
  if (teams == 1)
    days = b - 1;
  else 
    if (b % teams == 1 || b & teams == 0)
      days = b / teams;
    else
      days = b / teams + 1;

  printf("b = %d\n", b);
  printf("k = %d\n", k);
  printf("g = %d\n", g);
  printf("teams = %d\n", teams);

  printf("%d", days);
  
  return 0;
}
