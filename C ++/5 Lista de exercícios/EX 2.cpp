/* Elabore um algoritmo que leia 10 n�meros reais, calcule e mostre: 
a) A soma entre os n�meros maiores que 30; 
b) A m�dia entre os n�meros lidos.
*/

#include<iostream> 
#include<conio2.h>
using namespace std;
main() 
{                                               //Denis 
       float n, s=0, s1=0;
       int cont=1;
       while (cont<=10)
       { 
             cout<<"\nDigite o "<<cont<<"o. numero: ";
             cin>>n;
             s += n;
             if (n>30)
             {
                      s1=s1+n;
             }
       cont++;          
       }
       cout<<"\n\n\nSoma dos nr maiores que 30: "<<s1;
       cout<<"\nM\202dia entre todos os nrs: "<<s/10;
       getch() ;
}

       
