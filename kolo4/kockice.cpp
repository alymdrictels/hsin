#include <cstdio>
#include <cstdlib>

int abs(int val) {
  return (val > 0) ? val : -val;
}

int main()
{
  int cnt,a,b; char mir[100], slav[100];

  cnt = scanf("%s", mir);
  cnt = scanf("%s", slav);
  a = atoi(mir) < abs(7-atoi(mir)) ? abs(7-atoi(mir)) : atoi(mir);
  b = atoi(slav) < abs(7-atoi(slav)) ? abs(7-atoi(slav)) : atoi(slav);

  printf("%s", (a == b ? "nerijeseno" : (a > b ? "mirko" : "slavko")));

  return 0;
}
