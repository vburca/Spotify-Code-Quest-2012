#include <stdio.h>
#include <string.h>

int get_id(char unit[50]) {
  char u_names[10][50] = {"league", "mile", 
            "furlong", "chain", "yard", 
            "foot", "inch", "thou"};
  char u_shortcuts[10][5] = {"lea", "mi", "fur",
            "ch", "yd", "ft", "in", "th"};
  int i;

  for (i = 0; i < 8; i++)
    if (strcmp(unit, u_names[i]) == 0 ||
        strcmp(unit, u_shortcuts[i]) == 0)
        return i;
  return -1;
}


int main() {

  long double values[8] = {3, 8, 10, 22, 3, 12, 1000, -1};
  char unit1[50], unit2[50];
  char dummy[3];
  long double amount, result;
  int id1, id2;

  scanf("%Lf %s %s %s", &amount, unit1, dummy, unit2);
  
  id1 = get_id(unit1);
  id2 = get_id(unit2);
  
  result = amount;
  if (id1 <= id2)
    while (id1 < id2) {
      result = result * values[id1];
      id1++;
    }
  else 
    while (id2 < id1) {
      result = result / values[id2];
      id2++;
    }

  printf("%.9Lf\n", result);
//  printf("Unit1: %s -- id: %d\nUnit2: %s -- id: %d\n", 
//          unit1, get_id(unit1), unit2, get_id(unit2));
//  printf("Amount: %f\nUnit1: %s\nUnit2: %s\n", amount, unit1, unit2);

  return 0;

}
