#include <cstdio>

int main()
{
  int ucenik,autobus,mjesta;
  int cnt = scanf("%d %d %d", &ucenik, &autobus, &mjesta);

  printf("%s\n", (mjesta * autobus >= ucenik) ? "DA" : "NE");

  return 0;
}
