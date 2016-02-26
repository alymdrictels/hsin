#include <cstdio>

int main()
{
  int cnt, n, suma = 0, krivaSuma = 0, a,b,c,d,e;

  cnt = scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    cnt = scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    suma = a+b+c+d+e;

    if (suma < 40 || suma > 50)
      krivaSuma++;
  }

  if (krivaSuma > 0)
    printf("%d", krivaSuma);
  else
    printf("%s\n", "PAULA");

  return 0;
}
