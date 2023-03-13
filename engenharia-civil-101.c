#include <stdio.h>

int main() {
  int n, m, i, k, j, mult;
  int a = 1, janela = 0, alicerce = 0, porta = 0, alvenaria = 0;

  scanf("%dx%d", & n, & m);

  if (m % 2 == 0) {
    printf("Nao posso construir nessas proporcoes");
  } else if (n > 2) {
    for (i = 0; i < n - 2; i++) {
      if (a % 2 == 0) {
        for (k = 0; k < m; k++) {
          if (k % 2 != 0) {
            printf("o ");
            janela += 250;
          } else {
            printf("= ");
            alvenaria += 85;
          }
        }
      } else {
        for (j = 0; j < m; j++) {
          printf("= ");
          alvenaria += 85;
        }
      }
      a++;
      printf("\n");
    }
    while (a <= n) {
      a++;
      for (j = 0; j < m; j++) {
        if (j == (m / 2)) {
          printf("H ");
          porta = 500;
        } else {
          printf("= ");
          alvenaria += 85;
        }
      }
      printf("\n");
    }
    for (i = 0; i < (m * 2) - 1; i++) {
      printf("-");
      alicerce += 133;

    }
    printf("\n");
    printf("\n");

    printf("E o valor total eh %d", porta + alvenaria + alicerce + janela);
  }

  return 0;
}
