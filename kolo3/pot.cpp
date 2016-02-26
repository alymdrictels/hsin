#include <cstdio>
#include <cmath>

int main() {
  int cnt, N, num, sum, pot;

  cnt = scanf("%d", &N);
  sum = 0; pot = 0;
  for (int i = 0; i < N; i++, sum += pow(num, pot)) {
    cnt = scanf("%d", &num);
    pot = num % 10;
    num /= 10;
  }

  printf("%d", sum);

  return 0;
}
