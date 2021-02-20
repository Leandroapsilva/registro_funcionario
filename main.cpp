#include <iostream>
#include <stdio.h>

int main(void) {
 struct {
       int    matricula;
       char nome[30];
       char dataNasc[11];
       char cargo[20];
       float  salario;
     }func;
  printf("\n\nDigite a matricula: ");
  scanf("%d", &func.matricula);
  printf("\n\nDigite o nome: ");
  scanf("%s", &func.nome);
  printf("\n\nDigite a Data Nascimento: ");
  scanf("%s", &func.dataNasc);
  printf("\n\nDigite o cargo: ");
  scanf("%s", &func.cargo);
  printf("\n\nDigite o salario: ");
  scanf("%f", &func.salario);

  printf("\n\nFuncionario: %s",func.nome); 
  printf("\n\nMatricula:%d",func.matricula);
  printf("\n\nNascimento:%s",func.dataNasc);
  printf("\n\ncargo:%s",func.cargo);
  printf("\n\nSalario:%f\n",func.salario );
  return 0;
}
