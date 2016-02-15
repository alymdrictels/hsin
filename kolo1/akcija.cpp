#include <cstdio>
#include <algorithm>

int main()
{
  int N, cnt;
  cnt = scanf("%d", &N);
  int knjige[N];

  int sum = 0;

  for (int i = 0; i < N; i++) {
      cnt = scanf("%d", &knjige[i]);
  }

  std::sort(knjige, knjige + N);
  std::reverse(knjige, knjige + N);

  for (int i = 0; i < N; i++) {
      if ((i + 1) % 3 == 0) continue;
      sum += knjige[i];
  }
  printf("%d\n", sum);

  return 0;
}
