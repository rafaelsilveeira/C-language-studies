#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declara��o de vari�veis
	int laco, numero, cont, quant_div_impar, soma_impares, quant_pares;
	
	//iniciar as vari�veis de c�lculo
	laco=1; quant_pares=0; soma_impares=0;

	//laco de repeti��o que ser� feito por 7 vezes.
	do{
		//ler e armazenar n�mero digitado
		printf("\nDigite um numero inteiro positivo: ");
		scanf("%d",&numero);
		
		//se n�mero par, adicionar 1 na quantidade e imprimir divisores
		if (numero%2==0){
			quant_pares++;
			printf("Divisores de %d: ",numero);
			//la�o para verificar divisores do n�mero
			for (cont=1; cont<=numero; cont++){
				if (numero%cont==0){
				printf("%d ",cont);
				}
			}
			printf("\n");
		//se n�mero impar, somar o n�mero com os �mpares anteriormente digitados e calcular a quantidade de divisores
		}else{ 
			quant_div_impar=0;
			soma_impares=soma_impares+numero;
			printf("Quantidade de Divisores de %d: ",numero);
			//la�o para calcular a quantidade de divisores
			for (cont=1; cont<=numero; cont++){
				if (numero%cont==0){
				quant_div_impar++;
				}		
			}
			printf("%d\n",quant_div_impar); //imprimir a quantidade de divisores
		}
		laco++;
	}while(laco<=7); //fim do la�o de 7 vezes
	
	//imprimir em tela a soma dos �mpares e a quantidade de n�meros pares digitados 
	printf("\nSoma dos impares: %d",soma_impares);
	printf("\nQuantidade de valores pares: %d",quant_pares);
	
	printf("\n\nProgramador: Rafael Silveira da Rosa");
	
	return 0;
}
