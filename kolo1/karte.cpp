#include <cstdio>

#define BR_KARATA 13

int suma(bool podskup[], int N) {
  int suma = 0;
  for (int i = 0; i <= N; i++) {
    if (podskup[i] == 1) suma += 1;
  }
  return suma;
}

int main()
{
  bool vidjeni[4][BR_KARATA + 1] = {};
  bool greska = false;
  int cnt, broj, n_podskupa;
  char boja;

  for (;;) {
    cnt = scanf(" %[PKHT]%2d", &boja, &broj);
    if (cnt < 0) break;

    switch (boja){
      case 'P': n_podskupa = 0; break;
      case 'K': n_podskupa = 1; break;
      case 'H': n_podskupa = 2; break;
      case 'T': n_podskupa = 3; break;
    }
    if (vidjeni[n_podskupa][broj] == 1) {
       greska = true; break;
    }
    vidjeni[n_podskupa][broj] = 1;
  }

  if (greska) printf("GRESKA");
  else for (int i = 0; i < 4; i++) {
    printf("%d ", BR_KARATA - suma(vidjeni[i],BR_KARATA));
  }

  return 0;
}
