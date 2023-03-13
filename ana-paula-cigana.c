#include <stdio.h>

int main()
{
    int x=0, y=0, numero;
    
    scanf("%d", &numero);
    
    do{
        while (x < numero) {
            for (y=0; y < numero; y++) {
                if(y % 2 == 0 && x % 2 == 0) printf("A");
                else if (y % 2 != 0 && x % 2 == 0) printf(".");
                else if (y % 2 == 0 && x % 2 != 0) printf(".");
                else printf("A");
            }
            printf("\n");
            x++;
        }
    }while (x != numero &&  y != numero);

    return 0;
}
