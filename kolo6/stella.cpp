#include <cstdio>

int main()
{
  int cnt, suma = 0, num;
  char znam[4];

  cnt = scanf("%s", znam);

  for (int i = 0; i < 4; i++) {
    num = znam[i] - '0';

    if (num % 2 == 0) suma += num;
  }
  printf("%d", suma);

  return 0;
}
