#include <stdio.h>
#include <stdlib.h>

/*
CASOS DE TESTE
ENTRADAS		MAIOR	MENOR	SOMAIMPAR	QUANTPAR
12,14,17,5,0	17		5		22			2
5,12,14,17,0	17		5		22			2
17,14,12,5,0	17		5		22			2
17,14,5,12,0	17		5		22			2
*/

int main(void)
{
    
	int numero, somaimpar, quantidadepar, maior, menor;
    
    somaimpar=0;
    quantidadepar=0;
    maior=0;
    menor=0;
    	 
    do{ //Ler quantidade intederminadas de números.
    printf("\nDigite um numero inteiro maior que zero. (para encerrar, digitar 0): ");
    scanf("%d",&numero);
    
    if (numero%2!=0){ //se o número é ímpar, apresentar a soma dos valores
        somaimpar=somaimpar+numero;
    } else if(numero==0){ //desconsiderar o zero na soma dos pares
	} else{ //se o número for par, somar a quantidade de números pares
        quantidadepar=quantidadepar+1;
    }
    
    //calcular o maior e menor valor, desconsiderando o zero.
    if (maior==0 && menor==0 && numero>0){ //primeiro número digitado é maior e menor
    	maior=numero;
    	menor=numero;
	}else if(numero>maior){ //se numero é maior que o anterior, assume a var maior
        maior=numero;
    } else if(numero<menor && numero>0){ //senao se numero é menor que o anterior e maior que zero, assume a var menor
		menor=numero;
	}
    
    } while(numero!=0); //Encerrar quando o usuário digitar zero
    
    //apresentar os resultados
	printf("\nMaior valor: %d",maior);
    printf("\nMenor valor: %d",menor);
    printf("\nSoma dos numeros impares: %d",somaimpar);
    printf("\nQuantidade de numeros pares: %d\n",quantidadepar);
    
    
    printf("\n\nProgramador Rafael S. da Rosa\n");
    return 0;
    


}//main
