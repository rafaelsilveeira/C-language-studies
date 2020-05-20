#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*
11 = Candidata 1 
22 = Candidata 2 
33 =  Candidata 3 
44 = Candidata 4 
77 = voto em branco

Qualquer número diferente de 0 = Voto Nulo
Elabore um algoritmo que leia 10 códigos da candidata que receberá o voto, até a eleição ser finalizada com o voto 0. 

Escreva no final:
Total de votos para cada candidata
Percentual de VOTOS VÁLIDOS* de cada candidata
Total de votos nulos
Total de votos em branco
*/
    int cod, totalvotos, cand1, cand2, cand3, cand4, branco, nulo;
    
    //zerando as variáveis de contagem
    cand1=0;
    cand2=0;
    cand3=0;
    cand4=0;
    branco=0;
    nulo=0;
    totalvotos=0;
    
    do{//repetir para cada voto
        printf("\n\nDigite o codigo: ");
        printf("\n-------------------------");
        printf("\n11 = Candidata 1");
        printf("\n22 = Candidata 2");
        printf("\n33 = Candidata 3");
        printf("\n44 = Candidata 4");
        printf("\n77 = Voto em branco");
        printf("\n-------------------------\n");
        scanf("%d",&cod);
            
        
        switch(cod){
            case 11: //computar voto para candidata 1 e somar 1 voto no total
                printf("\nVoto computado: Candidata 1");
                cand1=cand1+1; totalvotos=totalvotos+1; break;
            
            case 22: //computar voto para candidata 2 e somar 1 voto no total
                printf("\nVoto computado: Candidata 2");
                cand2=cand2+1; totalvotos=totalvotos+1; break;
            
            case 33: //computar voto para candidata 3 e somar 1 voto no total
                printf("\nVoto computado: Candidata 3");
                cand3=cand3+1; totalvotos=totalvotos+1; break;
            
            case 44: //computar voto para candidata 4 e somar 1 voto no total
                printf("\nVoto computado: Candidata 4");
                cand4=cand4+1; totalvotos=totalvotos+1; break;
            
            case 77: //computar voto em branco e somar 1 voto no total
                printf("\nVoto computado: Em branco");
                branco=branco+1; totalvotos=totalvotos+1; break;
            
            case 0: // encerrar a votação
                printf("\nVotacao encerrada!");
                cod=0; break; //variavel cod=0, para finalizar
            
            default: //outros codigos resultam em voto nulo, somando 1 à variavel nulo
                printf("\nCodigo invalido. Voto nulo!");
                nulo=nulo+1; break;
        }
        
    } while(cod!=0); //encerra quando cod=0 (case 0)
    
    printf("\nTotal de votos da Candidata 1: %d",cand1); //imprime total de votos da candidata 1
    printf("\nPercentual de votos validos da Candidata 1: %d%%\n",(cand1*100)/totalvotos); //calculo e impressão da porcentagem
    
    printf("\nTotal de votos da Candidata 2: %d",cand2); //imprime total de votos da candidata 2
    printf("\nPercentual de votos validos da Candidata 2: %d%%\n",(cand2*100)/totalvotos); //calculo e impressão da porcentagem
    
    printf("\nTotal de votos da Candidata 3: %d",cand3); //imprime total de votos da candidata 3
    printf("\nPercentual de votos validos da Candidata 3: %d%%\n",(cand3*100)/totalvotos); //calculo e impressão da porcentagem
    
    printf("\nTotal de votos da Candidata 4: %d",cand4); //imprime total de votos da candidata 4
    printf("\nPercentual de votos validos da Candidata 4: %d%%\n",(cand4*100)/totalvotos); //calculo e impressão da porcentagem
    
    printf("\nTotal de votos em branco: %d (%d%%)\n",branco, (branco*100)/totalvotos); //imprime total de votos em branco (e percentual)

    printf("\nTotal de votos nulos: %d\n",nulo); //imprime total de votos nulos


	printf("\n\nProgramador Rafael S. da Rosa\n");    
    return 0;

}//main
