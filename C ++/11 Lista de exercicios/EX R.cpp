/* Escreva um algoritmo que gere a seguinte estrutura p/ armazenar num vetor,
os dados de 20 pessoas:
         idade inteiro
         Salario real
  Calcule e mostre: 
  a) A media salarial das pessoas c/idade > 50 anos;
  b) A idade da pessoa com maior salario;
  c) A qtd. de salarios entre 500 e 1000 (inlusive os extremos).
  */

#include<iostream>
#include<conio2.h> 
#define t 20
using namespace std;

struct info
{
       int idade;
       float sal;
};
main() 
{
       info x[t];
       int i, maiori, c=0, q=0;
       float maiors, s=0;
       for(i=0; i<t; i++)
       {
                cout<<"\nIdade: ";
                cin>>x[i].idade;
                cout<<"Salario: ";
                cin>>x[i].sal;
                if (x[i].sal >= 500 && x[i].sal <= 1000)
                {
                             c++;
                }
                if (x[i].idade > 50)
                {
                               s += x[i].sal;
                               q++;
                }
       }
       maiors = x[0].sal; maiori = x[0].idade;
       i=1;
       while (i<t)
       {
             if (x[i].sal > maiors)
             {
                  maiors = x[i].sal;
                  maiori = x[i].idade;
             }
             i++;
       }
       cout<<"\n\n\nA m\202dia de salario das pessoas com > 50 anos: "<<s/q;
       cout<<"\nA idade da pessoa com maior salario: "<<maiori;
       cout<<"\nA qtd. de salarios entre 500 e 1000: "<<c;
       getch();
}
       
       
