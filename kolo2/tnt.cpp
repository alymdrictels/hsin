#include <cstdio>

int main()
{
  int cnt,kune,runde;
  cnt = scanf("%d %d", &kune, &runde);

  for (int i = 1; i < runde + 1; kune -= i++ + 1);
  
  printf("%d", kune);

  return 0;
}
