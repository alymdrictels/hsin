#include <cstdio>

int main()
{
  int cnt,broj;
  cnt = scanf("%d", &broj);

  printf("%d",(broj % 2 == 0) ? broj + 1 : broj + 2);

  return 0;
}
