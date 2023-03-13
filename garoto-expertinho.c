#include <stdio.h>

int main()
{
    int n, num, res=0, cont=1, calc=0;
    
    scanf("%d", &n);
    
    do {
        cont++;
        calc = 0;
        scanf("%d", &num);
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                calc++;
                break;
            }
        }
        if (calc == 0) {
            if (num == 1) res = res + num;
            else if (num % 2 != 0) res = res - num;
            else res = res + num;
        }else res = res + num;
    }while (cont <= n);
    
    if (res < 0) printf("Foi de base");
    else printf("Ele ainda tem %d dias de vida", res);

    return 0;
}
