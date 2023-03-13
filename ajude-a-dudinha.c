#include <stdio.h>

int main()
{
    int N, K, P, Q;
    int cont1, cont2=2, cont3=0, cont4=0, cont5=0, cont6=0;
    int valorN=1, primos=0, maiorP, res;
    
    scanf("%d", &N);
    scanf("%d", &K);
    scanf("%d", &P);
    
    cont1 = N;
    
    do {
        valorN = 1;
        cont2 = 2;
        primos = 0;
        
        do {
            cont3 = 0;
            for (int i = 2; i <= cont2 / 2; i++) {
                if (cont2 % i == 0) {
                    cont3++;
                    break;
                }
            }
            if (cont3 == 0) {
                if (valorN < cont1) {
                    if (cont2 == 2) {
                        valorN = valorN * cont2;
                        cont2++;
                    }else {
                    primos++;
                    valorN = valorN * cont2;
                    cont2++;
                    }
                }else break;
            }else cont2++;
        }while (valorN != cont1);
        if (primos == P && valorN == cont1) {
            cont6++;
            maiorP = primos;
            res = cont1;
            if (cont4!=0) cont5++;
            cont4++;
        }
        cont1++;
    }while (cont1 < K);
    
    if (cont6 == 0) printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
    else printf("%d %d", res, cont5);
    
    return 0;
}

