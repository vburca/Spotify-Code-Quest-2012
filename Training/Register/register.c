#include <stdio.h>

int max[8] = {2, 3, 5, 7, 11, 13, 17, 19};

void print(int reg[8]) {
  int i;
  for (i = 0; i < 8; i++)
    printf("%d ", reg[i]);
  printf("\n");
}

int increment(int reg[8]) {
  int i = 0;
  reg[i] = (reg[i] + 1) % max[i];
  while (reg[i] == 0) {
    i++;
    reg[i] = (reg[i] + 1) % max[i];
    if (i == 7 && reg[i] == 0)
      return -1;
  }
  return 0;
}

int main() {

  int reg[8];
  int i;
  long count = 0;

  for (i = 0; i < 8; i++)
    scanf("%d", &reg[i]);

  while (increment(reg) != -1) {
    count++;
  }
//  print(reg);
  printf("%ld\n", count);
  
/*
  printf("Registers: ");
  for (i = 0; i < 8; i++)
    printf("%d ", reg[i]);
  printf("\n");
*/
  return 0;
}
