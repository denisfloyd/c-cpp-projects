// Construa um algoritmo que leia 4 n�meros reais e mostre o somat�rio entre eles.

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float a,b,c,d,soma;
       cout<<"\nDigite o primeiro numero: ";
       cin>>a;
       cout<<"\n\nDigite o segundo numero: ";
       cin>>b;
       cout<<"\n\nDigite o terceiro numero: ";
       cin>>c;
       cout<<"\n\nDigite o quarto numero: ";
       cin>>d;
       soma=a+b+c+d;
       cout<<"\n\nA soma entre os numeros �: "<<soma,
       getch();
}

/* obs.: La�o while - do
        int i=0;
        while(i<4)
        {
                  cout<<"Digite o "<<i+1<<"o. nr: ";
                  cin>>n
                  s += n;
        }
        ...
        
        Como n�o havia aprendido a lidar com la�os, n�o daria para resolver
        semelhante a resoluc�o acima.
*/
                   
       
