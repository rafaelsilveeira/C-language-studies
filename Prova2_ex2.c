#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa que crie uma matriz 10 X 10 e efetue as
seguintes operações:
a) Inserir automaticamente os valores indicados abaixo, na matriz (isto é, o usuário
não deve editar). Apresentar em tela a matriz,
organizada em linhas e colunas;
b) Crie uma função , que recebe como parâmetro a matriz e o índice de uma
COLUNA. A função deve retornar o número de ELEMENTOS ÍMPARES da
COLUNA indicada.
c) Calcular e apresentar SOMA de todos os elementos PARES (usar repetição)
d) Definir uma função que recebe uma matriz 10x10 como parâmetro e o número
de uma LINHA ; a função deve calcular a MÉDIA DA LINHA indicada e retornar
o valor. Usando esta função, apresentar a média da quinta linha;
e) Definir função que recebe como parâmetro uma matriz 10x10 e um número.
Essa função deve retornar a quantidade de elementos divisíveis pelo número
recebido como parâmetro. Usando esta função, indique a quantidade de
elementos divisíveis por 7;
*/

//Funcao para calcular a quantidade de ímpares na coluna indicada
int imparColuna(int matriz[10][10],int col){
	int qtdimpar=0, i;
	
	for(i=0;i<10;i++){
		if (matriz[i][col]%2!=0){ //se impar, incrementa o contador
			qtdimpar=qtdimpar+1;
		}
	}
	return qtdimpar;
}

//Funcao para calcular a media da linha solicitada
float mediaLinha(int matriz[10][10],int lin){
	float media=0, soma=0;
	int i;
	
	for(i=0;i<10;i++){
			soma=soma+matriz[lin][i]; //soma os numeros da linha indicada
	}
	
	media=soma/10; // calcula a media
	
	return media;
}

//Funcao que calcula a quantidade de numeros divisiveis por um numero indicado
int divisiveis7(int matriz[10][10],int num){
	int qtd=0, i,c;
	
	for(i=0;i<10;i++){
		for (c=0;c<10;c++){
			if (matriz[i][c]%num==0){ //se par, incrementar o contador
				qtd=qtd+1;
			}
		}		
	}
	return qtd;
}

int main(int argc, char *argv[]) {
	
	int mat[10][10];
	int l, c, numerador=0, somaPar=0;
	
	//preenche a matriz com numeros de 1 a 100
	for(l=0;l<10;l++){
		for (c=0;c<10;c++){
			numerador=numerador+1;
			mat[l][c]=numerador;
			
			//soma todos os numeros pares da matriz
			if (mat[l][c]%2==0){
				somaPar=somaPar+mat[l][c];
			}		
		}
	}

	//imprime a matriz
	printf("\nMatriz:\n");
	for(l=0;l<10;l++){
		for (c=0;c<10;c++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}

	//imprime as respostas
	printf("\nb) Quantidade de impares:\n");
	for(c=0;c<10;c++){
		printf("   Coluna %d: %d\n",c, imparColuna(mat,c));
	}
	printf("c) Soma dos pares: %d", somaPar);
	printf("\nd) Media da quinta linha: %.2f",mediaLinha(mat,4));
	printf("\ne) Quantidade de elementos divisiveis por 7: %d\n",divisiveis7(mat,7));


	printf("\n\n\nProgramador: Rafael Silveira da Rosa");
	return 0;
}
