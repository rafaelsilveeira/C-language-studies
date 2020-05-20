#include <stdio.h>
#include <stdlib.h>

//funcao para registrar o endereco do numero armazenado de menor valor
int* menorEndereco(int * a, int* b, int* c, int* d, int* e, int* f){
    int menor = *a; //variavel menor recebe o conteudo de a
    int *endereco=a;
    if(*b<menor){ //verifica se o conteudo de b é menor
        menor=*b;endereco=b;
    }
    if(*c<menor){
        menor=*c;endereco=c;
    }
    if(*d<menor){
        menor=*d;endereco=d;        
    }
    if(*e<menor){
        menor=*e;endereco=e;
    }
    if(*f<menor){
        menor=*f;endereco=f;
    }
    return endereco;
}

//funcao para somar os valores armazenados nas variaveis apontadas
int* somaValores(int * a, int* b, int* c, int* d, int* e, int* f){
    int soma = *a+*b+*c+*d+*e+*f;
    return soma;
}

//funcao para calcular a media dos valores
int mediaValores(int a, int b, int c, int d, int e, int f){
    int soma = a+b+c+d+e+f;
    int media = soma/6;
    return media;
}

int main(int argc, char** argv) {
    int a,b,c,d,e,f;
    
    //solicita que o usuario informe os valores e armazena nas varaveis
	printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    printf("Digite o valor de c: ");
    scanf("%d",&c);
    printf("Digite o valor de d: ");
    scanf("%d",&d);
    printf("Digite o valor de e: ");
    scanf("%d",&e);
    printf("Digite o valor de f: ");
    scanf("%d",&f);
    
    //Apresenta o endereco de memoria e o valor armazenado
    printf("a)\n");
	printf("Endereco da variavel a: %x  Valor armazenado:%d\n",&a,a);
    printf("Endereco da variavel b: %x  Valor armazenado:%d\n",&b,b);
    printf("Endereco da variavel c: %x  Valor armazenado:%d\n",&c,c);
    printf("Endereco da variavel d: %x  Valor armazenado:%d\n",&d,d);
    printf("Endereco da variavel e: %x  Valor armazenado:%d\n",&e,e);
    printf("Endereco da variavel f: %x  Valor armazenado:%d\n",&f,f);
    
    //chama as funcoes e apresenta os resultados
    printf("b) Endereco do menor: %x\n",menorEndereco(&a,&b,&c,&d,&e,&f));
    printf("c) Soma dos valores: %d\n",somaValores(&a,&b,&c,&d,&e,&f));
    printf("d) Media dos valores: %d\n",mediaValores(a,b,c,d,e,f));

	printf("\n\n\nProgramador: Rafael Silveira da Rosa");
	return 0;
}
