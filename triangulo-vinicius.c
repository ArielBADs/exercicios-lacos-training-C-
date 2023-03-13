#include <stdio.h>

int func(int x) {
    if (x > 0) return x;
    else return (-1) * x;
}

int main()
{
    char c, lc, letra;
    int li, co;
    
    scanf("%c", &c);

    li = c - 'A' + 1;
    co = 2 * li - 1;

    for (int i = 0; i < li; i++) {
        for (int j = 0; j < co; j++) {
            lc = 'A' + i;
            if ((j >= li - i - 1) && (j <= li + i - 1)) {    
                letra = lc - func(li - j - 1);
                printf("%c", letra);
            }
            else printf(".");       
        }
        printf("\n");
    }

   return 0;
}
