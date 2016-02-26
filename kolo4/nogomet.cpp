#include <cstdio>

int main()
{
  int cnt,n,i;
  bool found = false;

  cnt = scanf("%d", &n);

  for (i = 2; i <= n; i++) {
    if (n % i == 0) {
      found = true;
      break;
    }
  }

  if (found)
    printf("%d\n", i);
  else
    printf("%d\n", n);

  return 0;
}
