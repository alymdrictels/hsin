#include <cstdio>
#include <cstdlib>
#include <ctime>

#define MAX_LETTERS 15
#define N_PRESET_VOWEL 5
#define N_PRESET_CONSONANT 20

int main() {
  int cnt, A, B;
  char c;

  char presetVowel[N_PRESET_VOWEL] =
  {'a','e','i','o','u'};
  char presetConsonant[N_PRESET_CONSONANT] =
  {'b','c','d','f','g',
   'h','j','k','l','m',
   'n','p','r','s','t',
   'v','w','q','y','z'};

  srand(time(NULL));

  cnt = scanf("%d %d", &A, &B);

  char rijeci[B][MAX_LETTERS];

  for (int i = 0; i < B; i++) {
    int j, r, wordLen;
    wordLen = (rand() % MAX_LETTERS) + 1;
    for (j = 0; j < wordLen; j++, r = rand()) {

      if (j % 2 == 0) c = presetVowel[r % N_PRESET_VOWEL];
      else c = presetConsonant[r % N_PRESET_CONSONANT];

      rijeci[i][j] = c;
    }
    rijeci[i][j] = '\0';
  }
  for (int i = 0; i < B; i++)
    printf("%s ", rijeci[i]);

  return 0;
}
