#include <cstdio>

#define NBoja 4
#define NVrijednosti 13

int main() {
  int cnt, N;
  char V, B;

  char vrijednosti[NVrijednosti] =
  {'A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2'};

  char boje[NBoja] = {'S', 'H', 'D', 'C'};

  cnt = scanf("%c %c", &V, &B);
  cnt = scanf("%d", &N);
  char output[N + 1][3];

  for (int i = 0; i < N; i++) {
    char a, b;
    cnt = scanf(" %c %c", &a, &b);

    output[i][0] = a == V ? '1' : '0';
    output[i][1] = b == B ? '1' : '0';
    output[i][2] = '\0';
  }

  for (int i = 0; i < N; i++)
    printf("%s\n", output[i]);

  return 0;
}
