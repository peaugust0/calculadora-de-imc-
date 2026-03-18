#include <stdio.h>  /*biblioteca padrão de c pra ler strings e escrever funções, blablabla, tipo pandas pra python */


/* esse é o cabeçalho da calculadora*/

int main() { /*essa é a função principal em c pra escrever blocos de códigos, declarar variaveis, etc*/
  printf("******************************************\n"); /*esse \n em c funciona como um botão de ENTER pra quebrar a linha do codigo e não deixar tudo junto na mesma linha*/
  printf("*Calculadora de IMC e Peso Ideal*\n");
  printf("******************************************\n");


  float altura, peso, resultado_de_IMC;
  printf("Digite sua altura");
  scanf("%f", &altura); /*esse scanf é pro c ler o que a pessoa digitou, uso %f pra ele ler o numero com casas decimais*/
  printf("digite seu peso");
  scanf("%f", &peso);
  
    resultado_de_IMC = peso / (altura * altura); 
    printf("%f", resultado_de_IMC);
    getchar();
    return 0;

}