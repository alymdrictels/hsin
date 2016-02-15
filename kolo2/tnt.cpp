#include <cstdio>

int main()
{
  int cnt,kune,runde;
  cnt = scanf("%d %d", &kune, &runde);

  for (int i = 0; i < runde && kune > 0; i++) {
    kune -= runde + 1;
  }
  printf("%d", kune);

  return 0;
}
