#include <stdio.h>

int main()
{
    long int num, num2, res=0, res2 =0, maiorN=0;
    long int cont1=2, cont2=0;
    
    scanf("%ld", &num);
    
    do {
        if (num <= 1) {maiorN = -1; num2 = -1; break;}
        res = num % cont1;
        if (res == 0) {
            cont2 = 0;
            cont2++;
            res2 = num / cont1;
            for (cont2; res2 % cont1 == 0; cont2++) {
                res2 = res2 / cont1;
            }
        }if (cont2 > maiorN) {
            maiorN = cont2;
            num2 = cont1;
        }
        cont1++;
    }while (cont1 < num);
    
    printf("mostFrequent: %ld, frequency: %ld", num2, maiorN);

    return 0;
}
