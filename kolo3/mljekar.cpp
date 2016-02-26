#include <cstdio>

int main()
{
  int cnt, sum = 0, tmpA, tmpB;

  for (int i = 0; i < 5; i++){
    cnt = scanf("%d %d", &tmpA, &tmpB);
    sum += tmpA * tmpB;
  }
  printf("%d", sum);

  return 0;
}
