#include <stdio.h>

int main()
{
    int a, b, p1, p2;
    int cont1=0, cont2=0, cont3=0, pzecas=0;
    float res;
    
    scanf("%d %d", &a, &b);
    
    do {
        cont1 = 0;
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                cont1++;
                break;
            }
        }
        if (cont1 == 0) {
            p1 = a;
            do {
                cont2 = 0;
                p1--;
                for (int i = 2; i <= p1 / 2; i++) {
                    if (p1 % i == 0) {
                        cont2++;
                        break;
                    }
                }
            }while (cont2 != 0);
            
            p2 = a;
            do {
                cont3 = 0;
                p2++;
                for (int i = 2; i <= p2 / 2; i++) {
                    if (p2 % i == 0) {
                        cont3++;
                        break;
                    }
                }
            }while (cont3 != 0);
            
            res = (p1 + p2) / 2.0;
            if (res == a) pzecas++;
        }
        a++;
    }while (a <= b);
    
    printf("%d", pzecas);
    
    return 0;
}
