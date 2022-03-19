/* Escreva um algoritmo que leia a idade e o peso de 50 pessoas. Calcule e mostre: 
 a) A quantidade de pessoas com mais de 50 kg; 
 b) A média das idades das pessoas; 
 c) A quantidade de pessoas maiores que 18 anos e com peso superior a 55 kg; 
d) A quantidade de pessoas com idade par.
*/ 

#include<iostream>   
#include<conio.h>
using namespace std;
main() 
{
       float si=0, p;
       int cont=1, i, q50=0, qc=0, qd=0; 
       while (cont<=50)
       { 
             cout<<"\nDigite a sua idade: ";
             cin>>i;
             cout<<"\nDigite o seu peso: ";
             cin>>p;
             si += i;
             if (p>50)
             { 
                      q50++;
             }
             if (i>18 && p>55)
             { 
                          qc=qc+1;
             }
             if (i % 2 ==0) 
             { 
                       qd++;
             }
             
             cont++;
       }
       cout<<"\n\n\nQuant. de pessoas com mais de 50 KG: "<<q50;
       cout<<"\nA m\202dia entre todas as idades: "<<si/50;
       cout<<"\nPessoas com mais de 18 anos e 55 KG: "<<qc;
       cout<<"\nQuant. de pessoas com idade par: "<<qd;
       getch();
}  
             
       
       
