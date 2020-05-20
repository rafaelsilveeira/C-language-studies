#include <stdio.h>
#include <stdlib.h>

/* CASOS DE TESTE
ENTRADAS		
1,2,3,0,0,0,4,5,6,0,7,8,9,10
0,1,2,3,0,4,0,5,0,0,6,7,8,9,10
*/

int main() {
	
	int numero, contador, divisor, contdivisor;
	
	contador=1;

	do{//repeti��o de 1 a 10 valores digitados
	    printf("\nDigite um valor inteiro: ");
	    scanf("%d",&numero);
	    
		if (numero>0){ //se o valor for maior que zero, contador+1
			contador++;
		} else{ //se o numero for zero ou menor, pedir novo numero
			while (numero<=0){ //repetir enquanto o n�mero digitado n�o for maior que zero
				printf("\nDigite um valor inteiro maior que zero: ");
				scanf("%d",&numero);
				if (numero>0){ //se o n�mero for maior que zero, seguir a contagem. contador+1
					contador++;
				}
			}
		}
	    
	    if (numero%2!=0){ //se o n�mero for impar
	        divisor=0;
	        for (contdivisor=1; contdivisor<=numero; contdivisor++){ //contar a quantidade de divisoresdo numero
	            if (numero%contdivisor==0){ //se o resto do numero dividido pelo contador for zero, somar um divisor
	                divisor=divisor+1;
	            }
	        }
	        printf("Divisores: %d\n",divisor); //apresentar a quantidade de divisores do n�mero
	    }else{
	        printf("Quadrado: %d\n",(numero*numero));// sen�o, somar o n�mero ao quadrado
	    }
	    
	} while(contador<=10); //quando ocontador chegar a 10, encerrar


	printf("\n\nProgramador Rafael S. da Rosa\n");
	return 0;
}
