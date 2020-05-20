#include <stdio.h>
#include <stdlib.h>

/* 
CASOS DE TESTE
RENDA		VOTO
1			A
3			A
6			A
1			B
3			B
5			B
1			C
3			C
5			D
6			B

 */

int main(int argc, char *argv[]) {
	
	//declaracao de variaveis
	int i=0, renda, voto, votosA=0, votosB=0, votosC=0, votosD=0;
	int rendaB=0, rendaC=0;
	
	do{ //laço para regitrar votos, até 10
		printf("Digite a sua renda (em quantidade de salarios minimos): ");
		scanf("%d",&renda); //registra a renda
		
		printf("\n-----TABELA DE VOTACAO-----");
		printf("\n111 - Candidato A");
		printf("\n222 - Candidato B");
		printf("\n333 - Candidato C");
		printf("\n444 - Candidato D");
		printf("\n-----------------------------");	
		printf("\nDigite o codigo do seu voto: ");
		scanf("%d",&voto); //registra o voto
		
		switch (voto){ //cada opcao registra o voto para o participante e, quando valido, adiciona 1 ao contador
			case 111:
				votosA = votosA+1; i=i+1;
				printf("\nRenda informada: %d salario(s) minimo(s).",renda);
				printf("\nVoto computado: Candidato A\n\n"); 
				break;
			case 222:
				votosB = votosB+1; i=i+1; 
				printf("\nRenda informada: %d salario(s) minimo(s).",renda);
				printf("\nVoto computado: Candidato B\n\n");
				if (renda>5){ // calcula a quantidade de eleitores do candidato com mais de salarios de renda
					rendaB=rendaB+1;
				}
				break;
			case 333:
				votosC = votosC+1; i=i+1;
				printf("\nRenda informada: %d salario(s) minimo(s).",renda);
				printf("\nVoto computado: Candidato C\n\n");
				if (renda<3){// calcula a quantidade de eleitores do candidato com menos de 3 salarios de renda
					rendaC=rendaC+1; 
				} 
				break;
			case 444:
				votosD = votosD+1; i=i+1;
				printf("\nRenda informada: %d salario(s) minimo(s).",renda);
				printf("\nVoto computado: Candidato D\n\n");
				break;
			default:
				printf("\nCodigo Invalido. Preencha novamente.\n\n"); 
				break;
		}	
	}while (i<10); //encerra quando chegar em 10 votos validos
	
	//apresentacao dos resultados
	printf("\nTOTAL DE VOTOS");
	printf("\nCandidato A: %d", votosA);
	printf("\nCandidato B: %d", votosB);
	printf("\nCandidato C: %d", votosC);
	printf("\nCandidato D: %d", votosD);
	
	printf("\n");
	
	printf("\nb) %d eleitores do candidato B possuem renda maior que 5 salarios.",rendaB);
	printf("\nc) %d eleitores do candidato C possuem renda menor que 3 salarios.",rendaC);
	
	
	printf("\n\n\nProgramador: Rafael Silveira da Rosa");
	return 0;
}
