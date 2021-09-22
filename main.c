#include <stdio.h>
//Codifiquem a estrutura que representa o aluno deste sistema acadêmico
typedef struct aluno {
  int matricula;
  char nome[30];
  int n1, n2, n3;
} Aluno;

/*Codifiquem a função que dado um conjunto de alunos (vetor) e o número de alunos, ela
retorna o número de alunos aprovados. Lembrando que para ser aprovado o aluno tem que ter
uma média igual ou maior que 7: */

int numero_aprovados (Aluno aluno [], int n ){
  int i, resul;
  int aprovado = 0;
   for(i = 0; i<n; i++){
     resul = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
       if (resul >= 7){
    aprovado++;
   }
  }
return aprovado;
};

/*Codifiquem a função que dado um conjunto de alunos (vetor) e o número de alunos, ela
retorna a média da turma:*/

int media_turma (Aluno aluno [], int n){
  int i, resul;
  int  media = 0;
  int soma = 0;
   for(i = 0; i<n; i++){
     resul = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
     soma = soma + resul; 
   }
   media =  soma/n;
   return media;
};

/*Codifiquem a função que dado um conjunto de alunos (vetor) e o número de alunos, ela
retorna a matricula do aluno com a maior média:*/
int matricula_maior_nota (Aluno aluno [], int n){
  int i, resul;
  int media[6];
  int  maiornota;
  int cont = 0;

   for(i = 0; i<n; i++){
    resul = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
    media[i] =  resul;
    if(media[i] >= 7){
      cont++;
    }

  int j= 0;
    for(j = 0; j < cont; j++){
    if (media[j] > maiornota){
       maiornota = media[j];  
    }   
   }
  }
   return printf("%d", aluno[maiornota].matricula);
};


int main(){

Aluno alunos[] = {{1, "Joao", 10,10,8},{2, "Jose", 5,5,4},{3, "Maria", 7,5,10},
{4, "Joaquim", 3,2,1},{5, "Manoel", 0,2,2},{6, "joana", 5,8,10}};

printf ("numero de alunos aprovados %d\n", numero_aprovados(alunos, 6));
printf ("o aluno com maior nota foi %d\n", matricula_maior_nota(alunos, 6));
printf ("a media da turma foi %i\n", media_turma(alunos, 6));

return 0;
}