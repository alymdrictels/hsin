#include <cstdio>

int main() {
  int cnt, brojClanova, brojParova;
  cnt = scanf("%d %d", &brojClanova, &brojParova);

  int mask[brojParova + 1];

  for (int i = 0; i < brojParova; i++){
    int a, b;
    cnt = scanf("%d %d", &a, &b);

    mask[i] = 0 | 1 << --a | 1 << --b;
  }

  int NSkupova = 2 << brojClanova - 1;
  bool isValid[NSkupova];

  for (int i = 0; i < NSkupova; i++) {
    isValid[i] = true;

    for (int j = 0; j < brojParova; j++)
      if ((i & mask[j]) == mask[j]) {
        isValid[i] = false;
        break;
      }
  }

  int brojValidnih = 0;
  for (int i = 0; i < NSkupova; i++)
    isValid[i] == true ? ++brojValidnih : 0;

  printf("%d\n", brojValidnih);

  return 0;
}
