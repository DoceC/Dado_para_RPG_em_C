//C�digo por: C4ndy
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Escopo do programa:
int main(){
	setlocale(LC_ALL, "Portuguese");
    int dado, resultado;
    
    //Escolhas dos dados:
    printf("Insira o n�mero de lados que o dado deve conter: \n");
    scanf("%i", &dado);
    
    srand(time(NULL));
    resultado = rand() % dado;
    printf("\nO n�mero do dado �: %d\n", resultado);

//Finaliza��o do programa:
system("pause");
return 0;
}

