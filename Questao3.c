#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declara��o de vari�veis
	int n1, n2, n3, maior, menor, contador;
	
	//Solicitar ao usu�rio os 3 dados de entrada e fazer a leitura
	printf("Digite o primeiro numero (inteiro maior que zero): ");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero (inteiro maior que zero): ");
    scanf("%d",&n2);
    printf("\nDigite o terceiro numero (inteiro maior que zero): ");
    scanf("%d",&n3);
    
    //calcular o maior valor
    if (n1>n2 && n1>n3){ //se n1 for maior que n2 e n3, armazenar na vari�vel "maior"
    	maior=n1;
	}else if(n2>n1 && n2>n3){ //se n2 for maior que n1 e n3, armazenar na vari�vel "maior"
        maior=n2;
    } else if(n3>n1 && n3>n2){ //se n3 for maior que n1 e n2, armazenar na vari�vel "maior"
		maior=n3;
	}
	
	//calcular o menor valor
    if (n1<n2 && n1<n3){ //se n1 for menor que n2 e n3, armazenar na vari�vel "menor"
    	menor=n1;
	}else if(n2<n1 && n2<n3){ //se n2 for menor que n1 e n3, armazenar na vari�vel "menor"
        menor=n2;
    } else if(n3<n1 && n3<n2){ //se n3 for menor que n1 e n2, armazenar na vari�vel "menor"
		menor=n3;
	}
		
	printf("\nMaior numero: %d ", maior); //Imprimir em tela o maior n�mero
	printf("\nMenor numero: %d ", menor); //Imprimir em tela o menor n�mero
	
	printf("\nNumeros entre %d e %d: ", menor, maior);
		//la�o para verificar em imprimir os n�meros entre o menor e o maior.
		for (contador=menor+1; contador<=maior-1; contador++){ 
			printf("%d ",contador);
		}
	
		
	printf("\n\nProgramador: Rafael Silveira da Rosa");
		
	return 0;
}
