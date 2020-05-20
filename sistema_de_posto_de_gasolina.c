#include <stdio.h>
#include <stdlib.h>

/* 
POSTO DE GASOLINA.
O sistema de um posto de gasolina permite que o operador informe o produto de
acordo com os códigos:
11 - Gasolina Comum (R$4,30);
22 - Gasolina Aditivada (R$4,60);
33 - Gasolina Premium (R$5,30).
Após escolher o produto o usuário deve informar a quantidade em litros comprada.
Informar ao usuário o total a ser pago.
Finalmente, o operador deve informar se o valor foi pago em dinheiro (código 88) ou
cartão (código 99).
O programa deve ler uma quantidade indefinida de operações até que seja
informado o código de produto 0 (zero). Após o encerramento o programa deve
informar o total de litros vendidos de cada produto, o total de dinheiro no caixa, o
total em cartão e o total geral.
*/

int main(int argc, char *argv[]) {
	//Declaração de variáveis
	int produto, pagamento, cartao, dinheiro;
	float preco, quant_litro, litro_comum, litro_aditivada, litro_premium, total_compra, total_dinheiro, total_cartao, total_geral;
	
	//iniciar as variáveis de cálculo
	litro_comum=0; litro_aditivada=0; litro_premium=0;
	total_dinheiro=0; total_cartao=0; total_geral=0;
	
	//apresentar código dos produtos ao usuário
	printf("****************************");
	printf("\n11 - Gasolina Comum (R%$ 4,30)");
	printf("\n22 - Gasolina Aditivada (R%$ 4,60)");
	printf("\n33 - Gasolina Premium (R%$ 5,30)");
	printf("\n****************************\n");
	
	//laço de repetição até que seja digitado zero, para finalizar
	do{
		//solicitar entrada do usuário
		printf("\nDigite o codigo do produto: ");
		scanf("%d",&produto);
		

		//verificar entrada do usuário e atribuir preço ao produto		
		switch(produto){
			case 11: preco=4.30; break;
			case 22: preco=4.60; break;
			case 33: preco=5.30; break;
			case 0: preco=0; break;				
			default: break;
		}
		
		//se o código digitado for válido, solicitar quantidade
		if (preco!=0){
			printf("Digite a quantidade, em litros: ");
			scanf("%f",&quant_litro);
			
			//verificar o tipo de produto e atribuir a quantidade ao produto correspondente
			switch(produto){
				case 11: litro_comum = litro_comum+quant_litro; break;
				case 22: litro_aditivada = litro_aditivada+quant_litro; break;
				case 33: litro_premium = litro_premium+quant_litro; break;
				default: break;
			}
			
			//calcular e apresentar o total da compra			
			total_compra = preco*quant_litro;
			printf("Total da compra: %.2f", total_compra);
			
			//laço para verificar a forma de pagamento e repetir se o código digitado for inválido
			do{
				printf("\nForma de pagamento (dinheiro - cod. 88) ou (cartão - cod. 99):");
				scanf("%d",&pagamento);
				
				//verificar a forma de pagamento e armazenar o valor da compra na respectiva forma (dinheiro ou cartao)
				switch(pagamento){
					case 88: total_dinheiro=total_dinheiro+total_compra; total_geral=total_geral+total_compra; break;
					case 99: total_cartao=total_cartao+total_compra; total_geral=total_geral+total_compra; break;
					default: pagamento=0; printf("Cod. invalido. Informe novamente.");
				}
			}while(pagamento==0); //fim do laço da forma de pagamento
		}
		
	}while(preco!=0); //fim do laço de entrada de produtos e finalização do programa
	
	//apresentar resultados de venda durante operação
	printf("\nGasolina Comum: %.2f litros", litro_comum);
	printf("\nGasolina Aditivada: %.2f litros", litro_aditivada);
	printf("\nGasolina Premium: %.2f litros", litro_premium);
	printf("\nTotal em dinheiro: R%$ %.2f", total_dinheiro);
	printf("\nTotal em cartao: R%$ %.2f", total_cartao);
	printf("\nTotal geral: R%$ %.2f", total_geral);
	
	printf("\n\nProgramador: Rafael Silveira da Rosa");	
	return 0;
}
