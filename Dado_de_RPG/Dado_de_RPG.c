//C�digo por: C4ndy
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//Escopo do programa:
int main(){
	setlocale(LC_ALL, "Portuguese");
    int dado, d6;
    
    //Escolhas dos dados:
    printf("Selecione qual dado voc� deseja rolar: \n1-d6 \n");
    scanf("%i", &dado);
    
    //d6:
    if(dado == 1){
    srand(time(NULL));
    d6 = rand() % 6 + 1;
    printf("O n�mero sorteado foi: %d\n", d6);
}

//Finaliza��o do programa	
system("pause");
return 0;
}

