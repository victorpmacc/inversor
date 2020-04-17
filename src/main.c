/* Data de submissao: 17/03/2020
 * Nome: Victor Potença Macchini
 * RA: 225205
 */

#include <stdio.h>
const int tam_buffer = 100;
char pilha[100];
int n_pilha=0;

void push(char c) {
/* Insere caractere c na pilha */
  if (n_pilha < 100) {
    pilha[n_pilha]=c;
    n_pilha++;
  }
}

char pop() {
/* Remove caractere do topo da pilha e printa*/
  char c;
  if (n_pilha > 0) {
    n_pilha--;
    c = pilha[n_pilha];
  }
  printf("%c", c);
  return c;
}

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  
  int i = 0;
  while (buffer[i] != '\n'){
    /* Para todo elemento do buffer*/
    if (buffer[i] != ' '){
      /* Se não for espaço, carrega na pilha*/
      push(buffer[i]);
    } else{
      /* Se for espaço, imprime a pilha toda e printa um espaço*/
      while (n_pilha != 0){
        pop();
      }
      printf(" ");
    }
  i++;
  }

  /* Condicao de contorno (não ideal) para imprimir a ultima palavra empilhada*/
  while (n_pilha != 0){
        pop();
  }

  printf("\n");
  
  return 0;
}