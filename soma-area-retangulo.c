#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, n, c, i;
    float soma=0, cont=0;
    
    scanf("%f %f %f", &a, &b, &n);
    scanf("%f", &c);
    
    for (i=a; i<b && cont < n; i += (b-a)/n) {
        soma += ((b-a)/n) * pow((i + (b-a)/n), 2);
        cont++;
    }
    
    if (soma == c) printf("Igual");
    else if (soma > c) printf("Maior");
    else printf("Menor");

    return 0;
}
