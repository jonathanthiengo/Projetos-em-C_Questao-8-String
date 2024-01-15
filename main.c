
/*Faça um programa que lê uma string e troca todas as letras minúsculas por letras
maiúsculas.*/


#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {
  int i;
  char Frase[TAM];
  
  printf("Digite uma frase:");
  gets(Frase);

  int tam = strlen(Frase);
  
  for(i=0;i<tam;i++){
    if(Frase[i] >= 97 && Frase[i] <= 122){
      Frase[i] = Frase[i] - 32;
    }
  }
  printf("%s ",Frase);

  return 0;
}