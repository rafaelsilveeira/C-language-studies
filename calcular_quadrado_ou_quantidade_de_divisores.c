#include <stdio.h>
#include <stdlib.h>

/* 
CALCULE O QUADRADO OU A QUANTIDADE DE DIVISORES DE 10 NÚMEROS INTEIROS
Faça um algoritmo que leia 10 valores inteiros, com estrutura de repetição. Se o valor
for ímpar, apresentar a quantidade de divisores, se o valor for par, apresentar o
quadrado.

CASOS DE TESTE
ENTRADAS		
1,2,3,0,0,0,4,5,6,0,7,8,9,10
0,1,2,3,0,4,0,5,0,0,6,7,8,9,10
*/

int main() {
	
	int numero, contador, divisor, contdivisor;
	
	contador=1;

	do{//repetição de 1 a 10 valores digitados
	    printf("\nDigite um valor inteiro: ");
	    scanf("%d",&numero);
	    
		if (numero>0){ //se o valor for maior que zero, contador+1
			contador++;
		} else{ //se o numero for zero ou menor, pedir novo numero
			while (numero<=0){ //repetir enquanto o número digitado não for maior que zero
				printf("\nDigite um valor inteiro maior que zero: ");
				scanf("%d",&numero);
				if (numero>0){ //se o número for maior que zero, seguir a contagem. contador+1
					contador++;
				}
			}
		}
	    
	    if (numero%2!=0){ //se o número for impar
	        divisor=0;
	        for (contdivisor=1; contdivisor<=numero; contdivisor++){ //contar a quantidade de divisoresdo numero
	            if (numero%contdivisor==0){ //se o resto do numero dividido pelo contador for zero, somar um divisor
	                divisor=divisor+1;
	            }
	        }
	        printf("Divisores: %d\n",divisor); //apresentar a quantidade de divisores do número
	    }else{
	        printf("Quadrado: %d\n",(numero*numero));// senão, somar o número ao quadrado
	    }
	    
	} while(contador<=10); //quando ocontador chegar a 10, encerrar


	printf("\n\nProgramador Rafael S. da Rosa\n");
	return 0;
}
