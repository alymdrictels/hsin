#include <cstdio>
#include <cstring>

#define MAX_BUFFER 1000

int main()
{
  int n, cnt, result = 0;
  cnt = scanf("%d", &n);
  char chbuf[n + 1][MAX_BUFFER + 1];
  char expected[MAX_BUFFER + 1];

  for (int i = 0; i < n; i++) {

    cnt = scanf("%s",chbuf[i]);
    int len = strlen(chbuf[i]);

    for (int j = 0; j < len; j++) {

      switch (chbuf[i][j]) {
        case 'a': case 'b': case 'c':
          chbuf[i][j] = '2'; break;
        case 'd': case 'e': case 'f':
          chbuf[i][j] = '3'; break;
        case 'g': case 'h': case 'i':
          chbuf[i][j] = '4'; break;
        case 'j': case 'k': case 'l':
          chbuf[i][j] = '5'; break;
        case 'm': case 'n': case 'o':
          chbuf[i][j] = '6'; break;
        case 'p': case 'q': case 'r': case 's':
          chbuf[i][j] = '7'; break;
        case 't': case 'u': case 'v':
          chbuf[i][j] = '8'; break;
        case 'w': case 'x': case 'y': case 'z':
          chbuf[i][j] = '9'; break;
        default:
          break;
      }
    }
  }
  cnt = scanf("%s", expected);

  for (int i = 0; i < n; i++){
    if (strcmp(chbuf[i], expected) == 0) result++;
  }

  printf("%d", result);

  return 0;
}
