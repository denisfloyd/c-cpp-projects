/* A academia de ginastica ABC, solicitou o desenvolvimento de uma aplicação 
   computacional e você precisa escrever um algoritmo que armazene o sexo no 
   vetor s e a altura no vetor h, para cada um dos 80 alunos. A seguir calcule 
   e mostre: 
   a) O peso ideal para cada homem: peso_ideal = (72 * h) - 58
   b) O peso ideal para cada mulher: peso_ideal = (62.1 * h) - 44.7
   c) A média entre as alturas das mulheres. 
   d) A mulher mais alta. 
*/

#include<iostream>
#include<iomanip> 
#include<conio2.h>
#define t 10      
using namespace std;
main() 
{
       char s[t];
       float h[t], soma=0 , maior;
       int i,c=0;
       for (i=0; i<t; i++)
       {
           cout<<"\nInforme o seu sexo: (f = feminino e m = masculino)";
           cin>>s[i];
           cout<<"\nDigite a sua altura: ";
           cin>>h[i];
           if (s[i] == 'm') 
           {
                 cout<<"\nO seu peso ideal \202: "<<(72.7*h[i])-58;
           }
           else
           {
               soma += h[i];
               c++;
               maior = h[i];
               cout<<"\nO seu peso ideal \202: "<<(62.1*h[i])-44.7;
           }
       cout<<"\n";
       }
       i=0;
       while (i<t)
       {
             if (s[i] == 'f' && h[i]>maior)
             { 
                      maior = h[i];
             }
       i++;
       }
       cout<<"\n\n\n\nA m\202dia de altura entre as mulheres: "<<soma/c;
       cout<<"\nA mulher mais alta: "<<maior;
       getch();
}  
                   
                           
           
           
