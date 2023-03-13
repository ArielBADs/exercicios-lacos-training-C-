#include <stdio.h>

int main (){
 
	int dia1, dia2, mes1, mes2, ano1, ano2;
	int i, diasT=0, cont1, cont2;
	
	scanf("%d/%d/%d", &dia1, &mes1, &ano1);
	scanf("%d/%d/%d", &dia2, &mes2, &ano2);
	
	i = ano1;
	while (i <= ano2){
		if (i % 4 == 0){
			if(i % 400 == 0) diasT += 366;
			else if(i % 100 == 0 && i % 4 == 0) diasT += 365;
			else diasT += 366;
		}else diasT += 365;
        i++;
	}
	if (ano1 % 4 == 0 || ano1 % 400 == 0 || ano1 % 4 == 0 && ano1 % 100 != 0){
		for(cont1 = 1 ; cont1 < mes1 ; cont1++){
			if(cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12){
				diasT -= 31;
			}else if(cont1 == 2){
				diasT -= 29;
			}else{
				diasT -= 30;
			}
		}
	}else{
		for(cont1=1; cont1<mes1; cont1++){
			if(cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12){
				diasT -= 31;
			}else if(cont1 == 2){
				diasT -= 28;
			}else{
				diasT -= 30;
			}
		}
	}
	if(ano2%4 == 0 || ano2%400 == 0 || ano2%4 == 0 && ano2%100 != 0){
		for(cont2=mes2; cont2<12; cont2++){
			if(cont2 == 1 || cont2 == 3 || cont2 == 5 || cont2 == 7 || cont2 == 8 || cont2 == 10 || cont2 == 12){
				diasT -= 31;
			}else if(cont2 == 2){
				diasT -= 29;
			}else{
				diasT -= 30;
			}
		}
	}else{
		for(cont2=mes2; cont2<12; cont2++){
			if(cont2 == 1 || cont2 == 3 || cont2 == 5 || cont2 == 7 || cont2 == 8 || cont2 == 10 || cont2 == 12){
				diasT -= 31;
			}else if(cont2 == 2){
				diasT -= 28;
			}else{
				diasT -= 30;
			}
		}
	}
	diasT -= dia1;
	if(ano2%4 == 0 || ano2%400 == 0 || ano2%4 == 0 && ano2%100 != 0){
			if(cont2 == 1 || cont2 == 3 || cont2 == 5 || cont2 == 7 || cont2 == 8 || cont2 == 10 || cont2 == 12){
				diasT -= (31-dia2);
			}else if(cont2 == 2){
				diasT -= (29 - dia2);
			}else{
				diasT -= (30 - dia2);
			}
	}else{
			if(cont2 == 1 || cont2 == 3 || cont2 == 5 || cont2 == 7 || cont2 == 8 || cont2 == 10 || cont2 == 12){
				diasT -= (31-dia2);
			}else if(cont2 == 2){
				diasT -= (28 - dia2);
			}else{
				diasT -= (30 - dia2);
			}	
	}
 
	printf("%d", diasT);
 
	return 0;
}
