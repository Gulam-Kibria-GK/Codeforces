#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n % 3 == 1)
    n--;
  else if (n % 3 == 2)
    n++;
  n /= 3;
  printf("%d %d\n", n / 12, n % 12);
  return 0;
}