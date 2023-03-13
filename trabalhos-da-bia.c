#include <stdio.h>

int main()
{
    long long int n, num, soma=0, mult=1, mult2;
    long long int cont1=1, cont2=1;

    scanf("%lld", &n);

    do{
        cont1++;
        scanf("%lld", &num);

        soma = soma + num;

    }while(cont1 <= n);

    do {
        mult2 = mult;
        mult = mult * cont2;
        if (mult >= soma) break;
        else cont2++;
    }
    while (mult < soma);

    if (soma == 1) printf("Bia arrecadou 0! dinheiros e pode jogar tenis!");
    else if ((mult - soma) > (soma - mult2)) printf("Bia arrecadou %lld! dinheiros e pode jogar tenis!", (cont2 - 1));
    else printf("Bia arrecadou %lld! dinheiros e pode jogar tenis!", cont2);

    return 0;
}
