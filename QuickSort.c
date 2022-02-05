#include<stdio.h>
#include<conio.h>
/* A função pega o vetor a ser organizado como parametro (ponteiro), porem você
 deve pegar o tamanho do vetor (que deve ser um numero par [no caso se for ímpar, 
 subtraia 1 para manda-lo]) e o numero 0.
   
   void QuickSort (1 , 2, 3);
     1- tipo de dado *nome da variavel - ex.: char *p , float *c.
     2- o númer 0 antes referido.]
     3- tamanho do vetor.     */

// declaração da função
   void QuickSort (int *organizar, int esquerdo, int direito);
int main (void){
// declaração de variaveis
   int *p, opcao, i; // aqui iremos trabalhar com alocação dinamica no vetor
// instruções
   i=0;
   textcolor (15);
   do{
      if (i==0)
         p=(int*)malloc(sizeof(int));
      else
         p=(int*)realloc(p,sizeof(int));
      gotoxy (1,i+1);
      printf("numero %d - ",i+1);
      scanf ("%d",&p[i]);
      i++;
      textcolor (i+1);
      gotoxy (15,20);
      puts ("deseja informar mais algum numero (S - sim)?");
      opcao=toupper(getch());
      textcolor (15);
   }while (opcao=='S');
   
   // verifica se o tamanho do vetor é par ou ímpar e chama a função
   if ((i%2)==0){
      QuickSort (p,0,i);
   }
   else{
      QuickSort (p,0,i-1);
   }
   // fim da verificação
   
   clrscr();
   fflush(stdin);
   
   // apresenta dados ja ordenados
   for (opcao=0;opcao<i;opcao++){
      printf ("                  %d\n",p[opcao]);
   }
   // fim da apresentação de dados
   
   getch();
   free (p);
   return (0);
}
// função quick sort
void QuickSort(int *organizar, int esquerdo, int direito)
{  
   int cont, aux, i;
   int num, num2;
   cont=esquerdo;
   aux=direito;
   num = organizar[(esquerdo+direito)/2];
   do {
      while (organizar[cont] < num && cont<direito)
         cont++;
	  while (num < organizar[aux] && aux>esquerdo)
         aux--;
      if (cont<=aux){
         num2 = organizar[cont];
         organizar[cont] = organizar[aux]; 
         organizar[aux] = num2;
	     cont++;
         aux--;
      }
   } while (cont<=aux);
   if (esquerdo < aux) 
      QuickSort(organizar,esquerdo,aux);
   if (cont < direito) 
	  QuickSort(organizar,cont,direito);
}
//fim da funçaõ quick sort
