/* Escreva um algoritmo que leia duas notas de 10 alunos. Calcule e mostre: 
a)  A média aritmética das duas notas de cada aluno; 
b)  A mensagem que está na tabela abaixo: 
                   Média Aritmética       Mensagem 
                   Até 3.0                Reprovado 
                   Entre 3.0 e 7.0        Exame 
                   Acima de 7.0           Aprovado 
c)  O total de alunos aprovado; 
d)  O total de alunos reprovados; 
e)  O total de alunos de exame. 
*/

#include<iostream>
#include<conio2.h> 
using namespace std;
main() 
{                       
       float m, a, b;
       int cont=1, cr=0, ce=0, ca=0;
       while (cont<=10)
       { 
             cout<<"\n\nDigite a primeira nota: ";
             cin>>a;
             cout<<"\nDigite a segunda nota: ";
             cin>>b;
             m = (a+b)/2;
             cout<<"\nA m\202dia entre as duas \202: "<<m;
             if (m<=3)
             { 
                      cr++;
                      cout<<"\nAluno Reprovado";
             }
             else
             { 
                 if (m>3 && m<=7) 
                 { 
                         ce++;
                         cout<<"\nAluno para exame";
                 }
                 else
                 { 
                     ca++;
                     cout<<"\nAluno Aprovado";
                 }
             }
             cont++;
       }
             cout<<"\n\n\n\n\n\nAlunos Reprovados: "<<cr;
             cout<<"\nAlunos para exame: "<<ce;
             cout<<"\nAlunos Aprovados: "<<ca;
             getch ();
       }   
